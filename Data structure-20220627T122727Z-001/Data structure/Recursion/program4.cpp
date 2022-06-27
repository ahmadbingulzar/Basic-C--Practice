#include <iostream>
using namespace std;
int x=0;
int fun(int n)
{
     
    if(n>0)
    {
        x++;
        cout<<"i am function n  :"<<n<<"and i am x: "<<x<<endl;

       return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int r;
    r=fun(5);
    cout<<"i am r = "<<r<<endl;
    r=fun(5);
    cout<<"i am r = "<<r<<endl;
    return 0;
}