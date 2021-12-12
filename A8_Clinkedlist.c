#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;              //Data of the node
    struct node *nextptr; //Address of the node
} * head, *tmp;

void createNodeList(int n); //function to create the list
void displayList();         //function to display the list
void insertionatFirst();
void insertionBetween();

int main()
{
    int n;
    printf("\n\n Linked List : Create a singly linked list and print it in reverse order :\n");
    printf("------------------------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");
    displayList();
    insertionatFirst();
    printf("\nlinked list after insertion: \n");
    displayList();
    printf("\ninsertion in between: \n");
    insertionBetween();
    printf("\nlinked list after insertion: \n");
    displayList();

    return 0;
}
void insertionatFirst()
{
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    struct node *p = (struct node *)malloc(sizeof(struct node));
    tmp = head;
    while (tmp->nextptr != head)
    {
        tmp = tmp->nextptr;
    }
    p->num = data;
    p->nextptr = tmp->nextptr;
    tmp->nextptr = p;
    head = p;
}
void insertionBetween()
{
    int i = 1, data, index;
    struct node *q = (struct node *)malloc(sizeof(struct node));
    printf("input index and data: ");
    scanf("%d%d", &index, &data);
    tmp = head;
    while (i != index)
    {
        tmp = tmp->nextptr;
        i++;
    }
    q->num = data;
    q->nextptr = tmp->nextptr;
    tmp->nextptr = q;
}
void createNodeList(int n)
{
    struct node *p;
    int num, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) //check whether the stnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        // reads data for the node through keyboard
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->num = num;
        head->nextptr = head; //Links the address field to NULL
        tmp = head;
        //Creates n nodes and adds to linked list
        for (i = 2; i <= n; i++)
        {
            p = (struct node *)malloc(sizeof(struct node));
            if (p == NULL) //check whether the fnnode is NULL and if so no memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                p->num = num;      // links the num field of fnNode with num
                p->nextptr = head; // links the address field of fnNode with NULL
                tmp->nextptr = p;  // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}

void displayList()
{
    // struct node *tmp;
    if (head == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = head;
        do
        {
            printf(" Data = %d\n", tmp->num); // prints the data of current node
            tmp = tmp->nextptr;               // advances the position of current node
        } while (tmp != head);
    }
}