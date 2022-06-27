#include <iostream>
using namespace std;
//factorial with recursion method
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
//iteration factorial
int Ifact(int n)
{
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}
int main()
{
    int r = fact(5);
    cout << r << endl;
    return 0;
}