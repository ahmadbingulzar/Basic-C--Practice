#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char str1[]="hello my name is ali ahmad";
    const int Max=80;
    char str2[Max];
    for(int j=0;j<strlen(str1);j++)
    
        str2[j]=str1[j];
    
    str2[strlen(str2)]='\0';
    cout<<str2<<endl;
    return 0;
}