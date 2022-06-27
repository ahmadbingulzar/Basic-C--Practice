#include<iostream>
using namespace std;
int main()
{
    long dividend,divisor;
    char ch;
   do{ cout<<"enter dividend:";
    cin>>dividend;
    cout<<"enter divisor:";
    cin>>divisor;
    if(divisor==0)
    {
        cout<<"illegal divisor ";
        continue;
    }
    cout<<"quotient is ="<<dividend/divisor;
    cout<<"remender is ="<<dividend%divisor;
    cout<<"do another [y/n]:";
    cin>>ch;

}
while(ch!='n');
return 0;
}