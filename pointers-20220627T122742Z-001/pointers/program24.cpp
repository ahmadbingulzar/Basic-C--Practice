#include <iostream>
using namespace std;
class Person {
    protected:
            string name;

    public:
            void set_Name()
        {
            cout<<"Enter name : ";
            cin>>name;
        }
        void print_name()
        {
            cout<<endl<<name;
        }
        string get_name()
        {
            return name;
        }
};
int main()
{
    void bsort(Person**,int);   //prototype
    Person* pers_ptr[100];
    int n=0;
    char choice ;

    do{
        pers_ptr[n]=new Person;
        pers_ptr[n]->set_Name();
        n++;
        cout<<"Enter another (y/n)?";
        cin>>choice;
    }while(choice=='y');
    cout<<"unsorted list :";
    for(int i=0;i<n;i++)
    {
        pers_ptr[i]->print_name();
    }
    bsort(pers_ptr,n);  //prototype

    cout<<"sorted list :";
    for(int j=0;j<n;j++)
    {
        pers_ptr[j]->print_name();
    }   
    return 0;
}
void bsort(Person** pp,int n)
{
    void order(Person**,Person**);  //prototype
    int j,k;

    for(j=0;j<n-1;j++)
        for(k=0;k<n;k++)
            order(pp+j,pp+k);
}
void order(Person** pp1,Person** pp2)
{
    if(*pp1)->get
}