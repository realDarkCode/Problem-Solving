// Toph - Butcher of Vowels
#include <iostream>
using namespace std;

int main()
{
    short testcase;
    string name;
    cin >> testcase;
    bool isEvil;
    while (testcase--)
    {
        isEvil = false;
        cin >> name;
        for (int i = 0; name[i] != '\0'; i++)
        {

            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            {

                isEvil = true;
                break;
            }
        }
        isEvil ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}