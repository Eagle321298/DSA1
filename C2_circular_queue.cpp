#include <iostream>
#include <stdlib.h>
using namespace std;
struct cqueue
{
    int size;
    int front;
    int rear;
    int *arr;
};
bool isEmpty(struct cqueue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}
bool isFull(struct cqueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        return 1;
    }
    return 0;
}
void Enqueue(int data, struct cqueue *q)
{
    if (isFull(q))
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = data;
        cout << "Enqued element is " << data << endl;
    }
}
void Dequeue(struct cqueue *q)
{
    if (isEmpty(q))
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        cout << "deleted element " << q->arr[q->front] << endl;
    }
}
int main()
{
    struct cqueue *q;
    q = (struct cqueue *)malloc(sizeof(struct cqueue));
    q->size = 4;
    q->front = 0;
    q->rear = 0;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    Enqueue(10, q);
    Enqueue(20, q);
    Enqueue(30, q);

    Dequeue(q);
    Dequeue(q);

    Enqueue(40, q);
    Enqueue(50, q);

    return 0;
}