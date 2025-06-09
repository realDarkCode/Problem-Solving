#include <iostream>
using namespace std;

int main()
{
    short nc;
    int n;
    cin >> nc;

    while (nc-- > 0)
    {

        cin >> n;
        if (n >= 0)
        {
            cout << n << endl;
            continue;
        }

        cout << ~n + 1 << endl;
    }
}
