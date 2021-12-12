/////********************circular linkelist- insertion at first************************************

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void CircularllTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    } while (ptr->next != head);
}
struct Node *insertionatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p;
    p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = head;
    head=ptr;
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

    cout << "Circular linked list before insertion:\n";
    CircularllTraversal(head);
    head = insertionatFirst(head, 10);
    cout << "Circular linked list after insertion:\n";
    CircularllTraversal(head);

    return 0;
}

///////******************************insertion in between***************************************
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
//         cout<<ptr->data<<endl;
//         ptr = ptr->next;
//     } while (ptr->next != head);
// }
// struct Node *insertionBetween(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p;
//     p = head;
//     int i=0;
//     while (i!=index-1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;
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

//     cout << "Circular linked list before insertion:\n";
//     CircularllTraversal(head);
//     head = insertionBetween(head, 10,2);
//     cout << "Circular linked list after insertion:\n";
//     CircularllTraversal(head);

//     return 0;
// }

/////////******************************insertion at the End**********************************/////

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
// struct Node *insertionatEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p;
//     p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }

//     ptr->data = data;
//     p->next = ptr;
//     ptr->next = head;

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

//     cout << "Circular linked list before insertion:\n";
//     CircularllTraversal(head);
//     head = insertionatEnd(head, 10);
//     cout << "Circular linked list after insertion:\n";
//     CircularllTraversal(head);

//     return 0;
// }
/////////////************************insertion after provided Node***************************/////////
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularlistTraversal(struct Node *Head)
// {
//     struct Node *ptr = Head;
//     // Keep printing nodes till we reach the head node again
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != Head);
// }
// struct Node *insertionatNode(struct Node *Head, int data, struct Node *prevNode)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data=data;
//     ptr->next=prevNode->next;
//     prevNode->next=ptr;

//     return Head;
// }

// int main()
// {
//     struct Node *Head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     ///allocate memory for nodes of linkedlist in heap
//     Head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     Head->data = 8;
//     Head->next = first;

//     first->data = 34;
//     first->next = second;

//     second->data = 98;
//     second->next = third;

//     third->data = 67;
//     third->next = fourth;

//     fourth->data = 33;
//     fourth->next = Head;
//     printf("Circular linkedlist before the insertion\n");
//     circularlistTraversal(Head);
//     Head = insertionatNode(Head, 80, second);
//     Head = insertionatNode(Head, 90, fourth);

//     printf("Circular linkedlist after the insertion\n");
//     circularlistTraversal(Head);
//     return 0;
// }