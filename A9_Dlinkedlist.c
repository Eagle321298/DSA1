#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;              //Data of the node
    struct node *nextptr; //Address of the node
    struct node *prev;
} * head, *tmp, *tmp2;

void createNodeList(int n); //function to create the list
void displayList();         //function to display the list
void reverse();
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
    displayList();

    printf("\n The list in reverse are :  \n");
    reverse();
    // printf("\nlinked list after insertion: \n");
    // displayList();

    return 0;
}
void insertionatFirst()
{
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->num = data;
    p->nextptr = head;
    p->prev = NULL;
    head = p;
}
void insertionBetween()
{
    int i = 1, data, index;
    struct node *q = (struct node *)malloc(sizeof(struct node));
    printf("input index and data: ");
    scanf("%d%d", &index, &data);
    tmp = head;
    tmp2 = head->nextptr;
    while (i != index)
    {
        tmp = tmp->nextptr;
        tmp2 = tmp2->nextptr;
        i++;
    }
    q->num = data;
    q->nextptr = tmp->nextptr;
    tmp2->prev = q;
    q->prev = tmp;
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
        head->nextptr = NULL; //Links the address field to NULL
        head->prev = NULL;
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
                p->num = num;
                p->nextptr = NULL;
                p->prev = tmp;
                tmp->nextptr = p;
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
        } while (tmp != NULL);
    }
}
void reverse()
{
    tmp=head;
    do
    {
        tmp=tmp->nextptr;
    } while (tmp->nextptr != NULL);
    do
    {
        printf("Data:%d\n",tmp->num);
        tmp=tmp->prev;
    } while (tmp != NULL);
    printf("Data:%d\n",head->num);
    
}