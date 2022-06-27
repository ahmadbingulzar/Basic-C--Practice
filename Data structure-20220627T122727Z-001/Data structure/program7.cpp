/*This program is showing two methods of calculating sum of n numbers first method is using 
  recursion and second method is by using for loop we can also calculate it with a formula 
  
*/
#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return sum(n-1)+n;
}
int sum_iteration(int n)
{
    int s=0;
    int i;
    if(n==0)
    return 0;
    for( i=1;i<=n;i++)
     s+=i;
    return s;

}

int main()
{
    cout<<sum(7)<<endl;
    cout<<sum_iteration(7);
}
