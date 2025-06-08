#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number, hour;
    float rate, salary;

    cin >> number;
    cin >> hour;
    cin >> rate;

    salary = rate * hour;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}
