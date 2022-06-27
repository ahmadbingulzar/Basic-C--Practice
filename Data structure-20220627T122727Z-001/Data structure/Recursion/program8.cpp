#include <iostream>
using namespace std;
int feb(int n)
{
    if(n<=1)
        return n;
    
    else
        return feb(n-2)+feb(n-1);
}
int main()
{
    int number;
    cout<<"Enter number to get febnocci series :";
    cin>>number;

    int result=feb(number);
    cout<<"Result = "<<result<<endl;
    return 0;
}