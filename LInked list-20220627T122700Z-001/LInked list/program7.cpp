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
Node * delete_untill_value(Node *head,int value)
{
   Node * p=head;
   Node *q=head->next;
   while(q->data!=value && q->next!=NULL)
   {
       p=p->next;
       q=q->next;
   }
   if(q->data==value)
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
head=delete_untill_value(head,20);
cout<<endl<<endl;
linked_list_traversal(head);
return 0;
}
