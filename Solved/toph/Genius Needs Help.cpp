// Toph - Genius Needs Help
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int charToNumber(char c)
{
    return c - '0';
}

char numberToChar(int n)
{
    return n + '0';
}

int main()
{
    string a, b, result;
    int sum, carry, testcase;
    cin >> testcase;

    for (int k = 1; k <= testcase; k++)
    {
        cin >> a >> b;

        // ensure a is always the longer string
        if (b.length() > a.length())
        {
            swap(a, b);
        }

        // reverse both strings to add from least significant digit
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        // pad b with zeros to match length of a
        b.append(a.length() - b.length(), '0');

        carry = 0;
        result = "";

        // digit-by-digit addition with carry
        for (int i = 0; i < a.length(); i++)
        {
            sum = charToNumber(a[i]) + charToNumber(b[i]) + carry;
            result.push_back(numberToChar(sum % 10));
            carry = sum / 10;
        }

        if (carry)
        {
            result.push_back(numberToChar(carry));
        }

        // reverse result to correct order
        reverse(result.begin(), result.end());

        cout << "Case #" << k << ": " << result << '\n';
    }

    return 0;
}
