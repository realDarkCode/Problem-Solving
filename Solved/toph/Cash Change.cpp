// Toph - Cash Change
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    short notes[6] = {500, 100, 50, 10, 5, 1};
    vector<short> result;

    int cash;
    cin >> cash;

    int n;

    for (short i = 0; i < sizeof(notes) / sizeof(notes[0]); i++)
    {

        while (cash >= notes[i])
        {

            n = cash / notes[i];
            for (short j = 0; j < n; j++)
            {
                result.push_back(notes[i]);
            }
            cash %= notes[i];
        }
    }
    sort(result.begin(), result.end());

    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}