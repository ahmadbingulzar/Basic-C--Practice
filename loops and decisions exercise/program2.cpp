#include<iostream>
using namespace std;
int main()
{
    double celcius,forenheit;
    cout<<"select conversion"<<endl
    <<"1:celcius to forenheit"<<endl
    <<"2:forenheit to celcius"<<endl
    <<"Enter your choice:";
    int choice;
    cin>>choice;
    if(choice==1){
        cout<<"Enter temperature in celcius:";
        cin>>celcius;
        forenheit=(celcius * 9/5) + 32 ;
        cout<<"Temperature in forenheit ="<<forenheit;
    }
    else if(choice==2){
        cout<<"Enter temperature in forenheit:";
        cin>>forenheit;
        celcius=(forenheit - 32) * 5/9;
        cout<<celcius;
    }
    else
    cout<<"wrong choice";
    
}