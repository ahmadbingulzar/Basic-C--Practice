#include<iostream>
#include<iomanip>
using namespace std;
const int districts=4;
const int months=3;
int main()
{
    int d,m;
    double sales[districts][months]={
        {1442.07,234.50,654.01},
        {322.00,13838.32,1789.88},
        {9328,8455,566},
        {6541.00,635.55,85.58}
    };
  
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