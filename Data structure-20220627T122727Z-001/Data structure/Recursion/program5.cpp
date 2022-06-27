/*program used two function calls which is the example of tree recursion
*/
#include <iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        cout<<"Hellow i am tree recursion "<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
    return 0;
}
int main()
{
    fun(5);
}