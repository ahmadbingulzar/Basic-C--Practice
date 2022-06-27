#include<iostream>
using namespace std;

int main()
{
    int a;
    do{
        cout<<"enter value";
       
        cin>>a;
        switch(a)
        {
            case 1:
    
            case 2:
          
            
            case 3:
           
            
            case 4:
           
            
            case 5:
            
            cout<<"case first"<<endl;
            break;


            case 6:
            cout<<"case second";
            break;
            case 7:
            cout<<"case second";
            case 8:
            cout<<"case second"<<endl;
           
            default:
            cout<<"Try again:";
        }
    }
    while(a!='\r');
}