#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *nxtptr;
} *front = NULL, *rear = NULL;

void Enqueue(int item)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        n->data = item;
        n->nxtptr = NULL;
        if (front == NULL) // this is special case for inserting first element-initally front and rear=NULL, after inserting first element they will point to 1st new node
        {
            front = n;
            rear = n;
            cout << "enqued element is " << n->data << endl;
        }
        else
        {
            rear->nxtptr = n;
            rear = n;
            cout << "enqued element is " << n->data << endl;
        }
    }
}
void Dequeue()
{
    if (front == NULL)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        struct node *tmp = front;
        front = front->nxtptr;
        cout << "Deleted element is " << tmp->data << endl;
        free(tmp);
    }
}
void Traversal()
{
    struct node *tmp = front;
    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->nxtptr;
    }
}
int main()
{

    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Traversal();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();

    return 0;
}