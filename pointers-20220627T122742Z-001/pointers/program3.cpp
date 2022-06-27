#include <iostream>
using namespace std;
int main()
{
    int var_1=11;
    int var_2=22;
    int* ptr;
    ptr=&var_1;

    cout<<*ptr<<endl;

    ptr=&var_2;
    cout<<*ptr<<endl;
    return 0;
}