import subprocess
import os
import sys
import re
import difflib

def split_cases(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        content = f.read()
    # Split by blank lines (one or more)
    cases = re.split(r'(?:\r?\n){2,}', content.strip())
    return [case.strip() for case in cases if case.strip()]

def normalize(s):
    # Remove trailing spaces and normalize line endings
    return '\n'.join(line.rstrip() for line in s.replace('\r\n', '\n').replace('\r', '\n').split('\n')).strip()

def show_visible(s):
    return s.replace(' ', '␣').replace('\t', '⇥').replace('\n', '\\n\n')

def show_diff(expected_norm, got_norm):
        print("Diff:")
        for line in difflib.unified_diff(
            expected_norm.splitlines(),
            got_norm.splitlines(),
            fromfile='expected',
            tofile='got',
            lineterm=''):
            print(line)

if not os.path.isfile('./main') or not os.access('./main', os.X_OK):
    print("Error: ../main executable not found or not executable.")
    sys.exit(1)
if not os.path.isfile('./testcase/input.txt'):
    print("Error: ./testcase/input.txt not found.")
    sys.exit(1)
if not os.path.isfile('./testcase/output.txt'):
    print("Error: ./testcase/output.txt not found.")
    sys.exit(1)

input_cases = split_cases('./testcase/input.txt')
output_cases = split_cases('./testcase/output.txt')

if len(input_cases) != len(output_cases):
    print(f"Error: Number of input and output test cases do not match.\nInput cases: {len(input_cases)}, Output cases: {len(output_cases)}")
    sys.exit(1)

all_passed = True
for i, (inp, expected) in enumerate(zip(input_cases, output_cases), 1):
    print(f"Running test case {i}...")
    proc = subprocess.run(['./main'], input=inp+'\n', text=True, capture_output=True)
    got = proc.stdout
    got_norm = normalize(got)
    expected_norm = normalize(expected)
    if got_norm == expected_norm:
        print(f"Test case {i} PASSED\n")
    else:
        print(f"Test case {i} FAILED")
        print("Expected:")
        print(expected_norm)
        print("Got:")
        print(got_norm)
        show_diff(expected_norm, got_norm)
        print()
        all_passed = False
        break

if all_passed:
    print("All test cases PASSED!")
else:
    print("Some test cases FAILED.")