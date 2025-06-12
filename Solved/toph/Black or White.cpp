// Toph - Black or White
// Print the chess board cell color (Black, White) at a given (x,y)
#include <iostream>
using namespace std;

int toNumber(char c)
{
    return c - '0';
}
int main()
{
    string x, y;
    int a, b;
    cin >> x >> y;
    a = toNumber(x.back()) % 2;
    b = toNumber(y.back()) % 2;
    if ((a == 0 && b == 0) || (a == 1 && b == 1))
    {
        cout << "Black" << endl;
    }
    else
    {
        cout << "White" << endl;
    }

    return 0;
}