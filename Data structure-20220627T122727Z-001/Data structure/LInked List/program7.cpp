#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    Node *fifth;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth=new Node;
    head->data = 10;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = head;

    fifth->data = 25;
    fifth->next = head;

//to delete
cout<<"first data = "<<head->data<<endl;
cout<<"second data = "<<second->data<<endl;
cout<<"third data = "<<third->data<<endl;
cout<<"fourth data = "<<fourth->data<<endl;
cout<<"fifth data = "<<fifth->data<<endl;

second->next=third->next;
free(third);


cout<<"After delete"<<endl;

cout<<"first data = "<<head->data<<endl;
cout<<"second data = "<<second->data<<endl;
cout<<"third data = "<<third->data<<endl;
cout<<"fourth data = "<<fourth->data<<endl;
cout<<"fifth data = "<<fifth->data<<endl;




}