/*In this program recursion is done with 
 first method of recursion of printing 
 statement first and
  then calling the function 
*/
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<"hellow i am n = "<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    fun(4);
}