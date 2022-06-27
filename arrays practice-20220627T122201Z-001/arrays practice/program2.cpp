#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int districts=4;
    const int months=3;
    double sales[districts][months];
    for (int d=0;d<districts;d++)
        for(int m=0;m<months;m++)
        {
            cout<<"Enter sales for district :"<<d+1;
            cout<<", month "<<m+1<<": ";
            cin>>sales[d][m];
        }
        cout<<endl;
        cout<<"            months";
        for(int d=0;d<districts;d++)
        { cout<<"\nDistrict "<<d+1;
            for(int m=0;m<months;m++)
            cout<<setw(10)
            <<sales[d][m];
            cout<<endl;
        }

}