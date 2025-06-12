// Toph - BigNumSum
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
    string a, b, result = "";
    int sum = 0, carry = 0;
    cin >> a >> b;

    for (short i = a.length() - 1; i >= 0; i--)
    {
        sum = charToNumber(a[i]) + charToNumber(b[i]) + carry;
        result.push_back(numberToChar(sum % 10));
        carry = (int)sum / 10;
    }
    if (carry)
    {
        result.push_back(numberToChar(carry));
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}