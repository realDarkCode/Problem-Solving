#!/bin/bash

# Test script for main executable using input.txt and output.txt

# Check if main, input.txt, and output.txt exist
if [[ ! -x "./main" ]]; then
    echo "Error: ./main executable not found or not executable."
    exit 1
fi
if [[ ! -f "input.txt" ]]; then
    echo "Error: input.txt not found."
    exit 1
fi
if [[ ! -f "output.txt" ]]; then
    echo "Error: output.txt not found."
    exit 1
fi

# Run main with input.txt and capture output
./main < input.txt > temp_output.txt

# Compare output
if diff -q temp_output.txt output.txt > /dev/null; then
    echo "Test Passed!"
else
    echo "Test Failed!"
    echo "Differences:" 
    diff temp_output.txt output.txt
fi

# Clean up
rm temp_output.txt
