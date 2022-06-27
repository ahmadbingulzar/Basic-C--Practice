//arrays of strings 
#include<iostream>
using namespace std;

int main()
{
    const int Days=7;
    const int Max=10;

    char star[Days][Max]=
    {"sunday","Monday","tuesday","wednesday","thursday","friday","saturday"};
    for(int j=0;j<Days;j++)
        cout<<star[j]<<endl;
        return 0;
}