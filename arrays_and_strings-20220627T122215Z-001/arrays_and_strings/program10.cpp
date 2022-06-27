#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
enum Suit {clubs,diamonds,hearts,spades};
//from 2 to 10 are integers with no name
const int jack =11;
const int queen =12;
const int king=13;
const int ace=14;

class card
{
    private:
            int number ;
            Suit suit;

    public:
            card()
            {

            }   
            void set(int n,Suit s)
            {
                suit=s;
                number =n;
            }   
            void display();
};

void card::display()
{
    if(number>=2&&number <=10)
    {
        cout<<number;
    }
    else 
        switch (number)
        {
            case jack: cout<<"J";break;
            case queen: cout<<"Q";break;
            case king: cout<<"K";break;
            case ace:  cout<<"A";break;
        }
        switch(suit)
        {
            case clubs: cout<<static_cast<char>(5);break;
            case diamonds: cout<<static_cast<char>(4);break;
            case hearts: cout<<static_cast<char>(3);break;
            case spades: cout<<static_cast<char>(6);break;
        }
}
int main()
{
    card deck[52];
    int j;

    cout<<endl;

    for(j=0;j<52;j++)
    {
        int num=
    }
}