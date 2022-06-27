#include<iostream>
using namespace std;
int main()
{
    char input;
    int x=10,y=10;
    while(input!='\r')
    {
        cout<<"your location is "<<x<<" ,"<<y;
        if(x<5||x>15){
            cout<<"Beware dragons are there"<<endl;
        }
        cout<<"Enter the direction(n,s,e,w):";
        cin>>input;
        switch(input)
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
        }
    }
    return 0;
}