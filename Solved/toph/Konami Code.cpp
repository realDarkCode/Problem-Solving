#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, seq = "UUDDLRLRBA";
    cin >> input;
    short count = 0, index;

    index = input.find(seq);
    while (index >= 0)
    {
        count++;
        index = (input.find(seq, index + 1));
    }

    cout << count << endl;

    return 0;
}
