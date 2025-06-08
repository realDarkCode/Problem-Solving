#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    float unit1, unit2, price1, price2;
    double total;

    cin.ignore(numeric_limits<streamsize>::max(), ' ');
    cin >> unit1;
    cin >> price1;

    cin.ignore(numeric_limits<streamsize>::max(), ' ');
    cin >> unit2;
    cin >> price2;

    total = (unit1 * price1) + (unit2 * price2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
