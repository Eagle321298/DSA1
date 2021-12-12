#include <iostream>
#include <math.h>
using namespace std;
struct stack
{
    int top;
    int size;
    int *arr;
};
struct stack *createStack(int n)
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    stack->top = -1;
    stack->size = n;
    stack->arr = (int *)malloc(sizeof(int) * n);
    return stack;
}
int isEmpty(struct stack *stack)
{
    return (stack->top == -1);
}
int isFull(struct stack *stack)
{
    return (stack->top == stack->size - 1);
}
void push(struct stack *stack, int data)
{
    if (isFull(stack))
    {
        return;
    }
    stack->arr[++stack->top] = data;
    // stack->top++;
}
int pop(struct stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->arr[stack->top--]; 
}
void print(char s, char d, int element)
{
    cout << "move element " << element << " from " << s << " to " << d << endl;
}
void arrange(struct stack *src, struct stack *dist, char s, char d)
{
    int pole1Ele = pop(src);
    int pole2Ele = pop(dist);

    if (pole1Ele == INT_MIN)
    {
        push(src, pole2Ele);
        print(d, s, pole2Ele);
    }
    else if (pole2Ele == INT_MIN)
    {
        push(dist, pole1Ele);
        print(s, d, pole1Ele);
    }
    else if (pole1Ele > pole2Ele)
    {
        push(src, pole1Ele);
        push(src, pole2Ele);
        print(d, s, pole2Ele);
    }
    else
    {
        push(dist, pole2Ele);
        push(dist, pole1Ele);
        print(s, d, pole1Ele);
    }
}
void tohIterative(struct stack *src, struct stack *aux, struct stack *dist, int no_of_disk)
{
    int no_of_moves = pow(2, no_of_disk) - 1;
    char a = 'A', s = 'S', d = 'D';
    for (int i = 3; i >= 1; i--)
    {
        push(src, i);
    }
    for (int i = 1; i <= no_of_moves; i++)
    {
        if (i % 3 == 1)
        {
            arrange(src, dist, s, d);
        }
        else if (i % 3 == 2)
        {
            arrange(src, aux, s, a);
        }
        else if (i % 3 == 0)
        {
            arrange(aux, dist, a, d);
        }
    }
}
int main()
{
    int no_of_disk = 3;
    struct stack *src, *aux, *dist;

    src = createStack(no_of_disk);
    aux = createStack(no_of_disk);
    dist = createStack(no_of_disk);

    tohIterative(src, aux, dist, no_of_disk);

    return 0;
}