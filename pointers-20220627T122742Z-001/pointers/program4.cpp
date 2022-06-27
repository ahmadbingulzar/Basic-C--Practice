#include <iostream>
using namespace std;
int main()
{
    int var_1,var_2;
    int* ptr;

    ptr=&var_1;
    *ptr=37;
    var_2=*ptr;

    cout<<var_2<<endl;
    return 0;
}