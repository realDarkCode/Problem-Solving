#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, s1, s2;
    cin >> a >> b >> c;
    if (a == 0 || (pow(b, 2) - 4 * a * c) < 0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    s1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    s2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout.precision(5);
    cout << "R1 = " << fixed << s1 << endl;
    cout << "R2 = " << fixed << s2 << endl;
    return 0;
}
