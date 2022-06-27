/*In this the recursion is done with calling the function first and then printing the statement 
*/
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<"hellow i am n = "<<n<<endl;
    }
}
int main()
{
    fun(4);
}