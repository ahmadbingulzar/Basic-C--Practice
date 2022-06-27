#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=19;i++)
    {
        for(int j=20;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++)
        cout<<"x";
        cout<<endl;
    }
}