#include <iostream>
using namespace std;

int main()
{
    double i;
    cin >> i;

    int balance = (int)(i * 100 + 0.5);

    cout << "NOTAS:" << endl;
    cout << balance / 10000 << " nota(s) de R$ 100.00" << endl;
    balance %= 10000;

    cout << balance / 5000 << " nota(s) de R$ 50.00" << endl;
    balance %= 5000;

    cout << balance / 2000 << " nota(s) de R$ 20.00" << endl;
    balance %= 2000;

    cout << balance / 1000 << " nota(s) de R$ 10.00" << endl;
    balance %= 1000;

    cout << balance / 500 << " nota(s) de R$ 5.00" << endl;
    balance %= 500;

    cout << balance / 200 << " nota(s) de R$ 2.00" << endl;
    balance %= 200;

    cout << "MOEDAS:" << endl;

    cout << balance / 100 << " moeda(s) de R$ 1.00" << endl;
    balance %= 100;

    cout << balance / 50 << " moeda(s) de R$ 0.50" << endl;
    balance %= 50;

    cout << balance / 25 << " moeda(s) de R$ 0.25" << endl;
    balance %= 25;

    cout << balance / 10 << " moeda(s) de R$ 0.10" << endl;
    balance %= 10;

    cout << balance / 5 << " moeda(s) de R$ 0.05" << endl;
    balance %= 5;

    cout << balance / 1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
