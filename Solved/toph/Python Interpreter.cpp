#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    cout << str.substr(7, str.length() - 9) << endl;
}
