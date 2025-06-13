// Toph - Magic Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    else if (x == 2)
    {
        return true;
    }

    for (short i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int testcase;
    long long num;

    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> num;
        long long a = sqrt(num);

        if (a * a != num)
        {
            cout << "NO." << endl;
        }
        else if (isPrime(a))
        {
            cout << "YES." << endl;
        }
        else
        {
            cout << "NO." << endl;
        }
    }

    return 0;
}