#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 3.14159;
    long double radius, volume;
    cin >> radius;
    volume = (4 / 3.0) * PI * pow(radius, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}
