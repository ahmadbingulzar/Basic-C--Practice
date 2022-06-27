#include <iostream>
using namespace std;
struct link
{
    int data;
    link* next;
};
class linklist
{ 
    private:
            link* first;
    public:
            linklist()
            {
                first=NULL;

            }
            void add_item(int d);
            void display();
};
void linklist::add_item(int d)
{
    link * newlink=new link;
    newlink->data=d;
    newlink->next=first;
    first=newlink;
}
void linklist::display()
{
    link* current=first;
    while(current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
}
int main()
{
    linklist li;

    li.add_item(1);
    li.add_item(2);
    li.add_item(3);
    li.add_item(4);
    li.display();
    return 0;
}