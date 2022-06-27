#include<iostream>
using namespace std;
int main()
{
    int age[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter an age = ";
        cin>>age[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<"You entered "<<age[i]<<endl;

    }
    return 0;
}