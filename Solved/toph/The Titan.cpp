#include <iostream>
using namespace std;

int main()
{
    int n, v = 0;
    cin >> n;

    while (n > 0)
    {
        v += n * n;
        n--;
    }
    cout << v << endl;
}
