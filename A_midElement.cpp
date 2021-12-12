#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int num;              //Data of the node
    struct node *nextptr; //Address of the node
} * head, *tmp;

void createNodeList(int n); //function to create the list
void displaymid();         //function to display the list

int main()
{
    int n;
    printf("\n\n Linked List : Create a singly linked list and print it in reverse order :\n");
    printf("------------------------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    displaymid();

    return 0;
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
                p->nextptr = NULL; // links the address field of fnNode with NULL
                tmp->nextptr = p;  // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}

void displaymid()
{
    int l = 0;
    if (head == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = head;
        while (tmp != NULL)
        {
            tmp = tmp->nextptr; // advances the position of current node
            l++;
        }
    }
    l = l / 2 + 1;
    int i = 1;
    tmp = head;
    while (l != i)
    {
        tmp = tmp->nextptr;
        i++;
    }
    cout << "Mid-Element is " << tmp->num;
}