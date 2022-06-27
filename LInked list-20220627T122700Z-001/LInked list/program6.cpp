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
Node * delete_index(Node *head,int index)
{
    Node *p=head;
    Node *q=head->next;
    for(int i=1;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

head  =  (Node *)malloc(sizeof(Node));
second=(Node *)malloc(sizeof(Node));
third = (Node *)malloc(sizeof(Node));
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
head=delete_index(head,2);
cout<<endl<<endl;
linked_list_traversal(head);
return 0;
}
