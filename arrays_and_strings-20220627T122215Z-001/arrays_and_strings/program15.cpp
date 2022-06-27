#include<iostream>
using namespace std;

const int Max =2000;
char str[Max];

int main()
{
    cout<<"Enter a string :";
    cin.get(str,Max,'$');
    cout<<"You entered :"<<str<<endl;
    return 0;
}