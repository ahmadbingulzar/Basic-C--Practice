#include<iostream>
using namespace std;
int main()
{
    double initia_amount,num_of_years;
    double interest_rate,result;
    cout<<"Enter the initial amount :";
    cin>>initia_amount;
    cout<<"Number of years:";
    cin>>num_of_years;
    cout<<"Enter interest rate (Percent per year):";
    cin>>interest_rate;
    double rate=interest_rate/100;
    
    for(int i=1;i<=num_of_years;i++)
    {
        initia_amount=initia_amount+(initia_amount*rate);

    }

    cout<<"After 10 years you will have amount ="<<initia_amount<<"doolars."<<endl;
    
}