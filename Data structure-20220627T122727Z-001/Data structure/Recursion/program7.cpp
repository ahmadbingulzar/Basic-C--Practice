#include <iostream>
// this program is using recursive funciton to solve taylors series problem
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}
int main()
{
    cout << "Answer is = " << e(4, 15);
    return 0;
}