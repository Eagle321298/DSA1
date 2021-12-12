#include <bits/stdc++.h>
using namespace std;
class kstack
{
private:
    int *arr;
    int *next;
    int *top;
    int free;
    int n, k;

public:
    kstack(int k1, int n1);
    bool isFull() { return (free == -1); }
    bool isEmpty(int sn) { return (top[sn] == -1); }
    void push(int item, int sn);
    int pop(int sn);
};

kstack::kstack(int k1, int n1)
{
    k = k1, n = n1;
    arr = new int[n];
    next = new int[n];
    top = new int[k];
    free = 0;
    for (int i = 0; i < k; i++)
    {
        top[i] = -1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        next[i] = i + 1;
    }
    next[n - 1] = -1;
}
void kstack::push(int data, int sn)
{
    if (isFull())
    {
        cout << "Stack is overflow\n";
        return;
    }
    int i = free;
    free = next[i];
    next[i] = top[sn];
    top[sn] = i;
    arr[i] = data;
}
int kstack::pop(int sn)
{
    if (isEmpty(sn))
    {
        cout << "Stack is empty\n";
        return INT_MAX;
    }
    int i = top[sn];
    top[sn] = next[i];
    next[i] = free;
    free = i;
    return arr[i];
}

int main()
{
    kstack ks(3, 10);
    ks.push(10, 0);
    ks.push(86, 0);
    ks.push(37, 0);
    ks.push(39, 1);
    ks.push(87, 1);
    ks.push(19, 1);
    ks.push(76, 2);
    ks.push(43, 2);
    ks.push(99, 2);
    ks.push(64, 2);
    cout << ks.pop(0) << endl;
    cout << ks.pop(1) << endl;
    cout << ks.pop(2) << endl;
    cout << "deleted element:" << ks.pop(0) << endl;
    cout << "deleted element:" << ks.pop(2) << endl;
    ks.push(66, 1);
    cout << ks.pop(1) << endl;

    return 0;
}