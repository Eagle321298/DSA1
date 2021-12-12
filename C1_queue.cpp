#include <iostream>
#include <stdlib.h>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
// };
}*q;
// bool isEmpty(struct queue *q)
bool isEmpty()
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}
// bool isFull(struct queue *q)
bool isFull()
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}
// void Enqueue(int data, struct queue *q)
void Enqueue(int data)
{
    // if (isFull(q))
    if (isFull())
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
        cout<<"Enqued element is "<<data<<endl;
    }
}
// void Dequeue(struct queue *q)
void Dequeue()
{
    // if (isEmpty(q))
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        q->front++;
        cout << "deleted element " << q->arr[q->front] << endl;
    }
}
// void display(struct queue *q)
void display()
{
    for (int i = (q->front) + 1; i <= q->rear; i++)
    {
        cout << q->arr[i] << endl;
    }
}
int main()
{
    // struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 6;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    // Enqueue(10, q);
    Enqueue(10);
    // Enqueue(20, q);
    // Enqueue(30, q);
    // Enqueue(40, q);
    // Enqueue(50,q);
    // Enqueue(60,q);
    // Enqueue(70,q);
    // display(q);
    display();
    // Dequeue(q);
    // Dequeue(q);
    // Dequeue(q);
    // Dequeue(q);
    // Dequeue(q);
    // Dequeue(q);
    // Enqueue(80,q);
    // display(q);

    return 0;
}