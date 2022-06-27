#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char* str="that one day";
    int length=strlen(str);

    char * ptr;

    ptr=new char[length+1];
    strcpy(ptr,str);

    cout<<"ptr = "<<ptr<<endl;

    delete[]ptr;;
    return 0;
}
