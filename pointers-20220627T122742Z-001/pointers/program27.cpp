#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<"i am a: "<<a<<endl;
    cout<<"i am r: "<<r<<endl;
    r++;
    cout<<"i am a: "<<a<<endl;
    cout<<"i am r: "<<r<<endl;

    cout<<"i am a address: "<<&a<<endl;
    cout<<"i am r address: "<<&r<<endl;   
    return 0;
}
