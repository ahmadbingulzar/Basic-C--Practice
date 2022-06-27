#include<iostream>
using namespace std;
int main()
{
    int table_of,upto;
    cout<<"enter the number to print the table :";
    cin>>table_of;
    cout<<"enter maximum number to print table :";
    cin>>upto;
    int count =0;
    for(int i=1;i<=upto;i++)
    {
       int result= table_of*i;
        cout<<result<<"    ";
        count++;
        if(count==10)
        {
            count=0;
            cout<<endl;
        }
    }
}