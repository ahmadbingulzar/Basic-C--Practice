#include<iostream>
#include<iomanip>
using namespace std;
const int districts=4;
const int months=3;
int main()
{
    int d,m;
    double sales[districts][months];
    cout<<endl;
    for(d=0;d<districts;d++)
        for(m=0;m<months;m++)
        {
            cout<<"Enter sales for districts "<<d+1;
            cout<<" months "<<m+1<<" : ";
            cin>>sales[d][m];
        }
 cout<<endl<<endl;
 cout<<"                 1            2               3"       ;
 for(d=0;d<districts;d++)
{
     cout<<"Districts "<<d+1;
     for(m=0;m<months;m++)
     cout<<setiosflags(ios::fixed)
     <<setiosflags(ios::showpoint)
     <<setprecision(2)
     <<setw(10)
     <<sales[d][m];
}
 cout<<endl;
}