#include <iostream>
// https://www.geeksforgeeks.org/priority-queue-using-array-in-c/
using namespace std;
struct queue
{
    int value;
    int priority;
} pr[10000];
int size = -1;
void Enqueu(int value, int priority)
{
    size++;
    pr[size].value = value;
    pr[size].priority = priority;
}
int peek()
{
    int highestPriority = INT_MIN;
    int ind = -1;
    for (int i = 0; i <= size; i++)
    {
        if (highestPriority == pr[i].priority && ind > -1 && pr[ind].value < pr[i].value)
        {
            highestPriority = pr[i].priority;
            ind = i;
        }
        else if (highestPriority < pr[i].priority)
        {
            highestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}
void deq()
{
    int ind = peek();
    for (int i = ind; i <= size; i++)
    {
        pr[i] = pr[i + 1];
    }
    size--;
}
int main()
{
    Enqueu(10, 2);
    Enqueu(100, 2);
    Enqueu(50, 3);
    Enqueu(80, 5);
    Enqueu(40, 5);

    int getI = peek();
    cout << pr[getI].value << endl;

    deq();

    getI = peek();
    cout << pr[getI].value << endl;
    return 0;
}
// enqueue(): O(1)
// peek(): O(N)
// dequeue: O(N)