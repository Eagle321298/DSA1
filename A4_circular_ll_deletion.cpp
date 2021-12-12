// /////**************************deletion at first******************************************/////
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void CircularllTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     } while (ptr != head);
// }
// struct Node *deletionatFirst(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (q != head)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     head = q->next;
//     free(q);

//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 20;
//     head->next = first;

//     first->data = 30;
//     first->next = second;

//     second->data = 40;
//     second->next = third;

//     third->data = 50;
//     third->next = head;

//     cout << "Circular linked list before deletion:\n";
//     CircularllTraversal(head);
//     head = deletionatFirst(head);
//     cout << "Circular linked list after deletion:\n";
//     CircularllTraversal(head);

//     return 0;
// }

/////////****************************deletion in between**********************************///
// #include <iostream>
// #include <stdio.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularllTraversal(struct Node *head)
// {
//     struct Node *p = head;
//     do
//     {
//         cout << "Element:"
//              << p->data<<endl;
//         p = p->next;
//     } while (p != head);
// }
// struct Node *deletionBetween(struct Node *head, int index)
// {
//     struct Node *p;
//     struct Node *q = head->next;
//     p = head;
//     int i = 1;
//     while (i != index)
//     {
//         i++;
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 20;
//     head->next = first;

//     first->data = 30;
//     first->next = second;

//     second->data = 40;
//     second->next = third;

//     third->data = 50;
//     third->next = head;

//     cout << "Circular linkedlist before deletion:\n";
//     circularllTraversal(head);
//     cout << "Circular linkedlist after deletion:\n";
//     head = deletionBetween(head, 2);
//     circularllTraversal(head);

//     return 0;
// }

/////////////////*****************deletion at End************************************////
#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void circularllTraversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        cout << "Element:"
             << p->data << endl;
        p = p->next;
    } while (p != head);
}
struct Node *deletionatEnd(struct Node *head)
{
    struct Node *p;
    struct Node *q = head->next;
    p = head;

    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
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

    head->data = 20;
    head->next = first;

    first->data = 30;
    first->next = second;

    second->data = 40;
    second->next = third;

    third->data = 50;
    third->next = head;

    cout << "Circular linkedlist before deletion:\n";
    circularllTraversal(head);
    cout << "Circular linkedlist after deletion:\n";
    head = deletionatEnd(head);
    circularllTraversal(head);

    return 0;
}