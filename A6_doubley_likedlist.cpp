#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *doublyllTraversal(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        cout << "Element: " << p->data << endl;
        p = p->next;
    }
    return head;
}
void reverse(struct Node *head)
{
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    while (p != NULL)
    {
        cout << "Element: " << p->data << endl;
        p = p->prev;
    }
    // return head;
}

int main()
{
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;

    head = (struct Node *)malloc(sizeof(struct Node));
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = n1;
    head->prev = NULL;

    n1->data = 20;
    n1->next = n2;
    n1->prev = head;

    n2->data = 30;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 40;
    n3->next = NULL;
    n3->prev = n2;

    cout << "elements of doubly linked list:" << endl;
    doublyllTraversal(head);
    cout<<"Reverse of doubly linked list: "<<endl;
    reverse(head);

    return 0;
}