#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int clc = 0, slc = 0;

    for (char c : str)
    {
        if (c >= 'a' && c <= 'z')
        {
            slc++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            clc++;
        }
    }
    cout << clc << " " << slc << endl;
}
