#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        cout << "Runner up" << endl
             << "Champion" << endl;
    }
    else
    {
        cout << "Champion" << endl
             << "Runner up" << endl;
    }
}
