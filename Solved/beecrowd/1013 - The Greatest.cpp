#include <iostream>

using namespace std;

int main()
{
    int a, b, c, m, M;
    cin >> a >> b >> c;
    m = (a + b + abs(a - b)) / 2;
    M = (m + c + abs(m - c)) / 2;

    cout << M << " eh o maior" << endl;

    return 0;
}
