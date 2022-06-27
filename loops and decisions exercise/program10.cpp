#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a ,b and c :";
    cin>>a>>b>>c;
    if(a==b)
    {
    if(b==c)
    cout<<"a,b and c are equal";
    else 
    cout<<"b and c are not same ";
    }
    else 
    cout<<"not equal";
}