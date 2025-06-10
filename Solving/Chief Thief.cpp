#include <iostream>
using namespace std;

int main()
{
    int tc, l;
    long long v = 1;
    cin >> tc;
    int num[tc];
    l = tc;

    while (tc > 0)
    {

        cin >> num[l - tc];
        if (num[l - tc] > 0)
        {
            v *= num[l - tc];
        }

        tc--;
    }

    for (int i = 0; i < l; i++)
    {
        if (num[i] > 0)
        {
            cout << v / num[i];
        }
        else
        {
            cout << v;
        }

        if (i != l - 1)
        {
            cout << " ";
        }
    }
}
