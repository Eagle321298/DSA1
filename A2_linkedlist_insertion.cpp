// **************************INSERTION AT BEGINNING****************************************
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
        cout << "Element:" << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct Node *insertionatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    // head = ptr;
    return ptr;
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

    head = insertionatFirst(head, 50);
    linkedlistTraversal(head);

    return 0;
}

////************************INSERTION IN BETWEEN**********************************

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "Element:" << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }
// struct Node *insertionatIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->next = p->next;
//     ptr->data = data;
//     p->next = ptr;
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

//     head->data = 10;
//     head->next = first;

//     first->data = 20;
//     first->next = second;

//     second->data = 30;
//     second->next = third;

//     third->data = 40;
//     third->next = NULL;

//     cout<<"Before insertion:\n";
//     linkedlistTraversal(head);
//     cout<<"After insertion:\n";
//     head = insertionatIndex(head, 90, 2);
//     linkedlistTraversal(head);

//     return 0;
// }

//////////************************insertion at the end**********************//////////////
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "Element:" << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }
// struct Node *insertiaonatEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     ptr->next = NULL;
//     ptr->data=data;
//     p->next = ptr;
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

//     head->data = 10;
//     head->next = first;

//     first->data = 20;
//     first->next = second;

//     second->data = 30;
//     second->next = third;

//     third->data = 40;
//     third->next = NULL;

//     printf("linked list before insertiona\n");
//     linkedlistTraversal(head);
//     head = insertiaonatEnd(head, 80);
//     printf("linked list after insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }




// ///*************************insertion at given node***********************************////////
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "Element:" << ptr->data << endl;
//         ptr = ptr->next;
//     }
// }
// struct Node *insertiaonatNode(struct Node *head, int data, struct Node *node)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     while (p->next != node)
//     {
//         p = p->next;
//     }
//     ptr->next = p->next;
//     ptr->data = data;
//     p->next = ptr;
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

//     head->data = 10;
//     head->next = first;

//     first->data = 20;
//     first->next = second;

//     second->data = 30;
//     second->next = third;

//     third->data = 40;
//     third->next = NULL;

//     printf("linked list before insertiona\n");
//     linkedlistTraversal(head);
//     head = insertiaonatNode(head, 99, second);
//     printf("linked list after insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }