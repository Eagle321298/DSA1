#include <bits/stdc++.h>
using namespace std;
class kqueue
{
private:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int n, k;
    int free = 0;

public:
    kqueue(int n1, int k1);
    bool isEmpty(int qn)
    {
        return (front[qn] == -1);
    }
    bool isFull()
    {
        return (free == -1);
    }
    void push(int item, int qn);
    int pop(int qn);
};

kqueue::kqueue(int n1, int k1)
{
    n = n1, k = k1;
    free = 0;
    front = new int[k];
    rear = new int[k];
    arr = new int[n];
    next = new int[n];
    for (int i = 0; i < k; i++)
    {
        front[i] = -1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        next[i] = i + 1;
    }
    next[n - 1] = -1;
}
void kqueue::push(int item, int qn)
{
    if (isFull())
    {
        cout << "queue is full" << endl;
        exit(0);
    }
    int i = free;
    free = next[i];
    if (isEmpty(qn))
    {
        front[qn] = i;
    }
    else
    {
        next[rear[qn]] = i;
    }
    next[i] = -1;
    rear[qn] = i;
    arr[i] = item;
}
int kqueue::pop(int qn)
{
    if (isEmpty(qn))
    {
        cout << "queue is empty" << endl;
    }
    int i = front[qn];
    front[qn] = next[i];
    next[i] = free;
    free = i;
    return arr[i];
}

int main()
{
    kqueue kq(10, 3);

    kq.push(10, 0);
    kq.push(52, 0);
    kq.push(57, 0);

    kq.push(20, 1);
    kq.push(987, 1);
    kq.push(33, 1);

    kq.push(300, 2);
    kq.push(30, 2);
    kq.push(742, 2);
    kq.push(76, 2);


    cout << kq.pop(0) << endl;
    cout << kq.pop(1) << endl;
    cout << kq.pop(2) << endl;
    cout << kq.pop(2) << endl;


    return 0;
}