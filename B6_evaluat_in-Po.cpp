#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
} * ptr;
int isEmpty()
{
    if (ptr->top == -1)
    {
        cout << "Stack is empty" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(int size)
{
    if (ptr->top == size)
    {
        cout << "Stack is overflow" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int val)
{
    if (isFull(ptr->size))
    {
        cout << "Stack is Full\n";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int n;
void Evaluate(string postfix, int l)
{
    ptr = (struct stack *)malloc(sizeof(int));
    ptr->top = -1;
    ptr->size = l;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if ((postfix[i] >= 'A' && postfix[i] <= 'Z') || (postfix[i] >= 'a' && postfix[i] <= 'z'))
        {
            cout << "Enter value of " << postfix[i] << " :";
            cin >> n;
            push(n);
            cout << "what";
        }
        else
        {
            int n2 = pop();
            int n1 = pop();
            int result;
            switch (postfix[i])
            {
            case '+':
                result = n1 + n2;
                push(result);
                break;
            case '-':
                result = n1 - n2;
                push(result);
                break;
            case '*':
                result = n1 * n2;
                push(result);
                break;
            case '/':
                result = n1 / n2;
                push(result);
                break;
            case '^':
                result=n1^n2;
                push(result);
                break;
            }
        }
    }
    cout << "value of postfix expression is " << pop() << endl;
}
int main()
{
    cout << "Enter postfix expression: ";
    string postfix;
    cin >> postfix;
    int l = postfix.length();
    Evaluate(postfix, l);
}