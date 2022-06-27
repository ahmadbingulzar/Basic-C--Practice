#include <iostream>
using namespace std;
int main()
{
    int month, day, total_days;
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "enter month (1 to 12)";
    cin >> month;
    cout << "enter day(1 to31)";
    cin >> day;
    total_days = day;
    for (int i = 0; i < month - 1; i++)
        total_days += days_per_month[i];
    cout << "total days from start of the year are : " << total_days;
    cout << endl;
    return 0;
}