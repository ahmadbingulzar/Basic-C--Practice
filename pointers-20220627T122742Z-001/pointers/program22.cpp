#include <iostream>
using namespace std;
class Person {
protected:
        char name[40];

public:
    void set_name()
    {
        cout<<"Enter name: ";
        cin>>name;
    }
    void print_name()
    {
        cout<<"Name is : "<<name<<endl;
    }
};
int main()
{
    Person* per_ptr[100];
    int n=0;
    char choice;

    do{
        per_ptr[n]=new Person;
        per_ptr[n]->set_name();
        n++;
        cout<<"Enter another (y/n)? ";
        cin>>choice;
    }
    while(choice=='y');

    //for printing objects names
    for(int i=0;i<n;i++)
    {
        cout<<"Person number  = "<<i+1<<endl;
        per_ptr[i]->print_name();

    }
    cout<<endl;
    return 0;
}
