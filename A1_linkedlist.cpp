#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element:" << ptr->data<<endl;
        
        ptr = ptr->next;
    }
}
void linkedlistLength(struct Node *head)
{
    int l=0;
    struct Node *p=head;
    while (p != NULL)
    {
        p=p->next;
        l++;
    }
    cout<<"Length of linked list: "<<l<<endl;
    
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    linkedlistTraversal(head);
    linkedlistLength(head);

    return 0;
}