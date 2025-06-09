#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass;

    while (getline(cin, pass))

    {
        short passCount = 0, lcase = 0, ucase = 0, digit = 0;

        for (int e : pass)
        {
            if (e >= 'a' && e <= 'z')
                lcase++;
            else if (e >= 'A' && e <= 'Z')
                ucase++;
            else if (e >= '0' && e <= '9')
                digit++;

            if (lcase >= 1 && ucase >= 1 && digit >= 1)
            {
                passCount++;
                lcase = 0;
                ucase = 0;
                digit = 0;
            }
        }

        cout << passCount << endl;
    }

    return 0;
}
