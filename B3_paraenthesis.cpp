#include <iostream>
// #include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct stack
{
    int top;
    int size;
    char *arr;
} * ptr;

bool isEmpty()
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isFull(int size)
{
    if (ptr->top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char val)
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
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        ptr->top--;
    }
}
bool isParenthesismatch(string exp)
{
    ptr=(struct stack*)malloc(sizeof(char));
    ptr->top = -1;
    ptr->size = 100;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(')
        {
            push('(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty())
            {
                return false;
            }
            pop();
        }
    }
    if (isEmpty())
    {
        return true;
    }
    else
    {   
        return false;
    }
}
int main()
{
    string exp;
    cout<<"Enter an expression:\n";
    cin>>exp;
    if (isParenthesismatch(exp))
    {
        cout << "The parenthesis is matching\n";
    }
    else
    {
        cout << "The parenthesis is not matching\n";
    }
    return 0;
}
