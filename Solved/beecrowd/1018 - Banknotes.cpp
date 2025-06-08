#include <iostream>

using namespace std;

int main()
{
    int balance, backupBalance;
    short note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    cin >> balance;
    backupBalance = balance;

    while (balance >= 100)
    {
        note100++;
        balance -= 100;
    }
    while (balance >= 50)
    {
        note50++;
        balance -= 50;
    }
    while (balance >= 20)
    {
        note20++;
        balance -= 20;
    }
    while (balance >= 10)
    {
        note10++;
        balance -= 10;
    }
    while (balance >= 5)
    {
        note5++;
        balance -= 5;
    }
    while (balance >= 2)
    {
        note2++;
        balance -= 2;
    }
    while (balance >= 1)
    {
        note1++;
        balance -= 1;
    }

    cout << backupBalance << endl;
    cout << note100 << " nota(s) de R$ 100,00" << endl;
    cout << note50 << " nota(s) de R$ 50,00" << endl;
    cout << note20 << " nota(s) de R$ 20,00" << endl;
    cout << note10 << " nota(s) de R$ 10,00" << endl;
    cout << note5 << " nota(s) de R$ 5,00" << endl;
    cout << note2 << " nota(s) de R$ 2,00" << endl;
    cout << note1 << " nota(s) de R$ 1,00" << endl;
}
