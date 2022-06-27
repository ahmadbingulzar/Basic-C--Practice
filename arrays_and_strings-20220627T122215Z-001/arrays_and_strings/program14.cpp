#include<iostream>
using namespace std;
int main()
{
    const int Max =80;
    char str[Max];
    cout<<"Enter a string :";
    cin.get(str,Max);
    cout<<"You entered : "<<str<<endl;
    return 0; 
}