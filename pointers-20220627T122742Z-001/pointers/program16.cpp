#include <iostream>
using namespace std;
int main()
{
    void copystr(char*,const char* );

    char* str_1="that one day";
    char str_2[80];

    copystr(str_2,str_1);
    cout<<"This is second string '"<<str_2<<"'"<<endl;
    return 0;
}
void copystr(char * copy,const char * orignal)
{
    while(*orignal)
    {
        *copy++=*orignal++;
    }
    *copy='\0';
}