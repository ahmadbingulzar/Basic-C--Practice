#include <iostream>
using namespace std;
int main()
{
    void order(int* ,int*);

    int n1=99,n2=11;
    int n3=22,n4=88;

    order(&n1,&n2);
    order(&n3,&n4);

    cout<<"n1="<<n1<<endl;
    cout<<"n1="<<n2<<endl;
    cout<<"n1="<<n3<<endl;
    cout<<"n1="<<n4<<endl;

    return 0;
    
}
void order(int * num1,int* num2)
{
    if(*num1>*num2)
    {
        int temp=*num1;
        *num1=*num2;
        *num2=temp;
    }
}