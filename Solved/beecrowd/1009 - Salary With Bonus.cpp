#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    double salary, soldValue, total;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >> salary;
    cin >> soldValue;

    total = salary + (soldValue * 0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
