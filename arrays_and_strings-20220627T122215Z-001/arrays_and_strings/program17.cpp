#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[]="hello my name is ali ahmad ,\n programming in c++";
    const int Max =80;
    char str2[Max];

    strcpy(str2,str1);
    cout<<str2<<endl;
    return 0;
}