#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *nextptr;
} * head, *tmp;

void creatingList(int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    cout << "Input data:";
    int num;
    cin >> num;
    head->data = num;
    head->nextptr = NULL;
    tmp = head;

    for (int i = 2; i <= n; i++)
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        cout << "Input data:";
        cin >> num;
        p->data = num;
        p->nextptr = NULL;
        tmp->nextptr = p;
        tmp = tmp->nextptr;
    }
}
void displayList()
{
    tmp = head;
    while (tmp != NULL)
    {
        cout << "element: " << tmp->data << endl;
        tmp = tmp->nextptr;
    }
}
int lenght_by_recursion(struct node *head)
{
    tmp = head;
    if (tmp == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + lenght_by_recursion(tmp->nextptr);
    }
}
int main()
{
    cout << "---------------------------Creating singly Linked list-----------------------" << endl;
    cout << "Enter number of nodes:";
    int n;
    cin >> n;
    creatingList(n);
    displayList();
    cout << lenght_by_recursion(head);

    return 0;
}