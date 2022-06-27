#include<iostream>
using namespace std;
int main()
{
    char a;
    int x=10,y=10;
    do{
        cout<<"your location is "<<x<<" ,"<<y;
        cout<<"enter the direction(n,s,e,w):";
        cin>>a;
        switch(a)
        {
            case 'n':
            y--;
            break;
            case 's':
            y++;
            break;
            case 'e':
            x++;
            break;
            case 'w':
            x--;
            break;
            case '\r':
            cout<<"exiting"<<endl;
            break;
            default:
            cout<<"Try again:";
        }
    if(x==7&&y==11||y==8){
        cout<<"you have found the treasure"<<endl;
        exit(0);
    }
    }
    while(a!='\r');
}