#include <iostream>
#include <string>
using namespace std;

int main()
{

    int i, n;
    cin >> i;
    while (i > 0)
    {
        cin >> n;
        if (n == 1971)
        {
            cout << "Joy Bangla" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "Bangla" << endl;
        }
        else
        {
            cout << "Joy" << endl;
        }

        i--;
    }

    return 0;
}
