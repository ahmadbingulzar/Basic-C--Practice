#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int Max=20;
    char str[Max];
    cout<<"Enter a string :";
    //this funcion can store only 19 characters as it 
    //saves a room for null character 
    cin>>setw(Max)>>str;
    cout<<"You entered "<<str<<endl;
    return 0;
}