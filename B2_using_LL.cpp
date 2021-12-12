#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} * head, *ptr;
/////////////////////
bool isEmpty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
///////////////////////
void push()
{
    cout << "Enter element: ";
    int n;
    cin >> n;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = head;
    head = ptr;
}
////////////////////
void pop()
{
    if (isEmpty())
    {
        cout << "stack is empty\n";
    }
    else
    {
        struct node *tmp;
        tmp = head;
        cout << "pop element : " << tmp->data << endl;
        head = head->next;
        free(tmp);
    }
}
//////////////////////
void peek()
{
    cout << "Enter index:";
    int n;
    cin >> n;
    int i = 1;
    struct node *tmp = head;
    while (i != n)
    {
        tmp = tmp->next;
        i++;
    }
    cout << "Element at index " << n << " is " << tmp->data << endl;
}
void display()
{
    struct node *tmp = head;
    cout << "Element in stack: " << endl;
    while (tmp != NULL)
    {
        cout << "Element:" << tmp->data << endl;
        tmp = tmp->next;
    }
}
//////////////////////////////////////////////////////////////////////////
int main()
{
    head = NULL;
    push();
    push();
    push();
    push();
    push();
    push();
    display();
    // pop();
    // pop();
    // pop();
    peek();
    pop();
    pop();
    display();

    return 0;
}