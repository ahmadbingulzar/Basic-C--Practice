#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter speed (30,50,80,100) :";
    cin >> speed;
    switch(speed){ 
case 30:
    cout << "normal speed";
    break;
case 50>speed:
    cout << "slightly high";
    break;
    default:
    cout << "wrong choice enter again: ";
case 80:
    cout << "its high";
    break;
case 100:
    cout << "slow down";
    break;
    }
    return 0;
}
