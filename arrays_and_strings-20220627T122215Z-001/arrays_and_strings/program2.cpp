#include<iostream>
using namespace std;
int main()
{
    const int SIZE=6;
    double sales[SIZE];
    cout <<"Enter weight sales for 6 days "<<endl;
    for(int i=1;i<SIZE;i++)
    {
        cout<<"Enter for day "<<i<<endl;
        cin>>sales[i];
    }
    double total=0;
    for(int i=0;i<SIZE;i++)
        total+=sales[i];
        double average=total/SIZE;
        cout<<"Average is = "<<average<<endl;
        return 0;
}