#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int fact_itreation(int n)
{
    int i=0,f=1;
    if(n<=0)
    {
        return 1;
    }
    for(i=1;i<=n;i++)
    f*=i;
    return f;
}
int main()
{
    cout<<"By recursion  = "<<fact(7)<<endl;
    cout<<"By iteration  = "<<fact_itreation(7)<<endl;
}