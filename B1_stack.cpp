#include <iostream>
#include <stdlib.h>
using namespace std;
struct stack
{
    int top;
    int size;
    int *arr;
} * ptr;
///////////////////////////////
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
////////////////////////////////
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
////////////////////////////
void push()
{
    if (isFull(ptr->size))
    {
        cout << "Stack is Full\n";
    }
    else
    {
        ptr->top++;
        cout << "Input data: ";
        int data;
        cin >> data;
        ptr->arr[ptr->top] = data;
    }
}
///////////////////////////////////
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "pop Element: " << ptr->arr[ptr->top] << endl;
        ptr->top--;
    }
}
//////////////////////////////////////
void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Elements in Stack: " << endl;
        for (int i = 0; i <= ptr->top; i++)
        {
            cout << ptr->arr[i] << " ";
        }
        cout << endl;
    }
}
////////////////////////////////////
void peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Enter index: " << endl;
        int n;
        cin >> n;
        cout << "Element at index " << n << " is " << ptr->arr[n - 1] << endl;
    }
}
/////////////////////
void findMid()
{
    cout << ptr->arr[ptr->top / 2] << endl;
}
int stackTop()
{
    return ptr->arr[ptr->top];
}

///////////////////////////////////////////////////////////////////////////////
int main()
{
    ptr = (struct stack *)malloc(sizeof(int));
    ptr->top = -1;
    ptr->size = 10;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));

    // isEmpty() ? cout << "Stack is empty" : cout << "not empty" << endl;
    // isFull(ptr->size) ? cout << "Stack is overflow" : cout << "not overflow" << endl;
    push();
    push();
    push();
    push();
    push();
    push();
    push();

    display();
    cout << "Middle element of stack is ";
    findMid();
    display();

    pop();
    display();
    peek();
    return 0;
}