// Toph - Roll the Dice
#include <iostream>
using namespace std;

int main()
{
    int testcase, num;
    cin >> testcase;
    for (short i = 0; i < testcase; i++)
    {
        cin >> num;
        cout << num * 6 << " " << num << endl;
    }

    return 0;
}