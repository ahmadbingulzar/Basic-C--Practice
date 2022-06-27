#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *previous;
    Node *next;
};

void traversal(Node *head)
{
do{
        cout<<"This is data "<<head->data<<endl;
        head = head->next;


    }while(head->next!=NULL);
    cout<<"This is data "<<head->data<<endl;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    
head   =  (Node *)malloc(sizeof(Node));
second =  (Node *)malloc(sizeof(Node));
third  =  (Node *)malloc(sizeof(Node));
fourth =  (Node *)malloc(sizeof(Node));


head->data=5;
head->previous=NULL;
head->next=second;

second->data=10;
second->previous=head;
second->next=third;

third->data=15;
third->previous=second;
third->next=fourth;

fourth->data=20;
fourth->previous=third;
fourth->next=NULL;

traversal(head);
return 0;
}
