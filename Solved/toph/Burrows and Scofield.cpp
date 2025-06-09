#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int getNumericSum(string str)
{
    int value = 0;
    for (char c : str)
    {
        if (c >= '0' && c <= '9')
        {
            value += c - '0';
        }
    }
    return value;
}

int main()
{

    string line1, line2;
    int x, y, v[3];
    getline(cin, line1);
    getline(cin, line2);

    x = getNumericSum(line1);
    y = getNumericSum(line2);

    v[0] = x + y;
    v[1] = x * y;
    v[2] = abs(x - y);
    sort(v, v + 3);

    cout << "\"" << v[1] << "\"" << endl;
    return 0;
}
