#include<iostream>
#include<string>
using namespace std;

int main()
{
    string full_name,nick_name,address;
    string greeting("hello, ");

    cout<<"Enter your full name :";
    getline(cin,full_name);
    cout<<"Enter your nick name : ";
    cin>>nick_name;
    cout<<"Enter your address on seperte lines : ";
    getline(cin,address,'$');
    cout<<endl<<endl;
    cout<<"Your full name is = "<<full_name<<endl;
    cout<<"Your nick name is = "<<nick_name<<endl;
    cout<<"Your address is  = "<<address<<endl;
}