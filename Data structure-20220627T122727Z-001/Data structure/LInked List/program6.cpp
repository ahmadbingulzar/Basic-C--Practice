//Insert at the End concept of linked list
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;

};
void linked_list_traversal(  Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"The element data is = "<<ptr->data<<endl;
        cout<<"The Node address is = "<<ptr->next<<endl;
        ptr = ptr->next;
    }
}
Node * after_node(Node *head, Node* previous_node,int data)
{
    Node * ptr=(Node *)malloc(sizeof(Node));
    ptr->data=data;
    previous_node->next=ptr;
    ptr->next=previous_node->next;
    return head;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

head    =new  Node;
second  =new  Node;
third   =new  Node;
fourth  =new  Node;

head->data=10;
head->next=second;


second->data=15;
second->next=third;

third->data=20;
third->next=fourth;

fourth->data=25;
fourth->next=head;

cout<<"This is head data = "<<head->data<<endl;
cout<<"This is head address = "<<head->next<<endl;


cout<<"This is fourth  data = "<<fourth->data<<endl;
cout<<"This is fourth  address = "<<fourth->next<<endl;
cout<<"What is in the Head itself = "<<head<<endl;

if(head==fourth->next)
{
    cout<<"I am same : "<<endl;
}
else 
    cout<<"i am not same "<<endl;
    return 0;

}
