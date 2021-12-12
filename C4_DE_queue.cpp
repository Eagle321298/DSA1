#include <iostream>
#include <stdlib.h>
using namespace std;
struct de
{
    int size;
    int front;
    int rear;
    int *arr;
} * q;
void EnqeueAtFront(int item)
{
    if (((q->front == 0) && (q->rear == q->size - 1)) || (q->front == q->rear + 1))
    {
        cout << "queue is full\n";
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->front] = item;
        cout << "inerted element: " << item << endl;
    }
    else if (q->front == 0)
    {
        q->front = q->size - 1;
        q->arr[q->front] = item;
        cout << "inerted element: " << item << endl;
    }
    else
    {
        q->front = q->front - 1;
        q->arr[q->front] = item;
        cout << "inerted element: " << item << endl;
    }
}
void EnqeueAtRear(int item)
{
    if (((q->front == 0) && (q->rear == q->size - 1)) || (q->front == q->rear + 1))
    {
        cout << "queue is full\n";
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->front] = item;
        cout << "inerted element: " << item << endl;
    }
    else if (q->rear == q->size - 1)
    {
        q->rear = 0;
        q->arr[q->rear] = item;
        cout << "inerted element: " << item << endl;
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = item;
        cout << "inerted element: " << item << endl;
    }
}
void DeqeueAtFront()
{
    if (q->front == -1 && q->rear == -1)
    {
        cout << "queue is empty" << endl;
    }
    else if (q->front == q->rear)
    {
        cout << "Deleted element is " << q->arr[q->front] << endl;
        q->front = -1;
        q->rear = -1;
    }
    else if (q->front == q->size - 1)
    {
        cout << "deleted element is " << q->arr[q->front]<<endl;
        q->front = 0;
    }
    else
    {
        cout << "deleted element is " << q->arr[q->front] << endl;
        q->front = q->front + 1;
    }
}
void DeqeueAtRear()
{
    if (q->front == -1 && q->rear == -1)
    {
        cout << "queue is empty" << endl;
    }
    else if (q->front == q->rear)
    {
        cout << "Deletem element is " << q->arr[q->front] << endl;
        q->front = -1;
        q->rear = -1;
    }
    else if (q->rear == 0)
    {
        cout << "deleted element is " << q->arr[q->rear]<<endl;
        q->rear = q->size - 1;
    }
    else
    {
        cout << "deleted element is " << q->arr[q->rear] << endl;
        q->rear = q->rear - 1;
    }
}
void display()
{
    int i = q->front;
    do
    {
        cout << q->arr[i] << endl;
        i = (i + 1) % q->size;

    } while (i != q->rear+1);
}
int main()
{
    q = (struct de *)malloc(sizeof(struct de));
    q->front = -1;
    q->rear = -1;
    q->size = 10;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    EnqeueAtFront(10);
    EnqeueAtFront(120);
    EnqeueAtRear(30);
    EnqeueAtRear(40);
    EnqeueAtRear(450);
    EnqeueAtRear(90);
    display();
    DeqeueAtFront();
    DeqeueAtRear();
    display();

    return 0;
}