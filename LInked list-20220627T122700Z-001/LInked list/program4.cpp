// Insert at the End concept of linked list
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void linked_list_traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "The element data is = " << ptr->data << endl;
        cout << "The Node address is = " << ptr->next << endl;
        ptr = ptr->next;
    }
}
Node *after_node(Node *head, Node *previous_node, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    previous_node->next = ptr;
    ptr->next = previous_node->next;
    return head;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    head->data = 10;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = NULL;

    linked_list_traversal(head);
    head = after_node(head, third, 30);
    cout << endl
         << endl;
    linked_list_traversal(head);
    return 0;
}
