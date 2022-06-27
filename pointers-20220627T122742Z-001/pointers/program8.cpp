#include <iostream>
using namespace std;
int main()
{
    int intarray[]={31,32,33,34,35};
    int* ptr_int;
    ptr_int=intarray;

    for(int i=0;i<5;i++)
        cout<<*(ptr_int++)<<endl;
        return 0;
}