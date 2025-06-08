#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int time, avrSpeed, distance;
    double liter;

    cin >> time >> avrSpeed;

    distance = time * avrSpeed;
    liter = distance / 12.0;
    cout << fixed << setprecision(3) << liter << endl;

    return 0;
}
