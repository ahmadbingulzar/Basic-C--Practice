//Insert in between concept of linked list
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;

};
void linked_list_traversal(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"The element data is = "<<ptr->data<<endl;
         cout<<"The Node address is = "<<ptr->next<<endl;
        ptr=ptr->next;
    }
}
Node * insert_in_between(Node *head,int data,int index)
{
    int i=0;
Node * ptr=(Node *)malloc(sizeof(Node));
Node * p=head;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

head=  (Node *)malloc(sizeof(Node));
second=(Node *)malloc(sizeof(Node));
third= (Node *)malloc(sizeof(Node));
fourth=(Node *)malloc(sizeof(Node));

head->data=10;
head->next=second;


second->data=15;
second->next=third;

third->data=20;
third->next=fourth;

fourth->data=25;
fourth->next=NULL;

linked_list_traversal(head);
insert_in_between(head,55,2);
cout<<endl<<endl;
linked_list_traversal(head);
}
