/*
this is the example of indirect recursion where two function are calling each other
*/
#include<iostream>
using namespace std;
void  fun_B(int );
void fun_A(int n)
{
    if(n>0)
    {
        cout<<"function a n = "<<n<<endl;
        fun_B(n-1);
    }
}
void  fun_B(int n)
{
    if(n>0)
    {
        cout<<"Function b n = "<<n<<endl;
        fun_A(n/2);
    }
}
int main()
{
    fun_A(20);
}