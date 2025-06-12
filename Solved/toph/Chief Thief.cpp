// Toph - Chief Thief
#include <iostream>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;
    long long int product = 1;

    short numOfZero = 0;

    int num, numbers[testcase];

    // take numbers as input
    for (int i = 0; i < testcase; i++)
    {
        cin >> num;
        numbers[i] = num;
        if (num == 0)
        {
            numOfZero++;
        }
        else
        {
            product *= num;
        }
        if (numOfZero > 1)
        {
            product = 0;
        }
    }

    for (int i = 0; i < testcase; i++)
    {

        if (numOfZero > 1)
        {
            cout << "0";
        }
        else if (numOfZero == 1)
        {
            if (numbers[i] == 0)
            {
                cout << product;
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            cout << product / numbers[i];
        }

        // print extra space if it's not the last number
        if (testcase - i != 1)
        {
            cout << " ";
        }
    }
}
