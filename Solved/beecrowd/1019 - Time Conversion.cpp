#include <iostream>

using namespace std;

int main()
{
    int seconds, minutes, hours;
    cin >> seconds;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
