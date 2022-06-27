#include <iostream>
using namespace std;
int main()
{
    void testing(char*);
    char str[]="that one day";
    cout<<str<<endl;
    testing(str);
    return 0;
}
void testing(char * ps)
{
    while(*ps)
    {
        cout<<*ps++;
    }
    cout<<endl;
}