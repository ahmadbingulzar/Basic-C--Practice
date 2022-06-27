#include<iostream>
using namespace std;
int main()
{
    int chairs,persons,i;
    cout<<"Enter number of persons :";
    cin>>persons;
    int per=persons-1;
    cout<<"Enter numebr of charirs :";
    cin>>chairs;
    int per2=persons-chairs;
    
     for(i=per;i>per2;i--){ 
        persons*=i;
     }
    cout<<"Total ="<<persons;
}