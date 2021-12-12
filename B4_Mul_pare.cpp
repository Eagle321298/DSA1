#include <iostream>
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
char pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
bool check(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isParenthesismatch(string exp)
{
    ptr = (struct stack *)malloc(sizeof(char));
    ptr->top = -1;
    ptr->size = 100;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty())
            {
                return false;
            }
            if (!check(pop(), exp[i]))
            {
                return false;
            }
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
    cout << "Enter an expression:\n";
    cin >> exp;
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
// #include <bits/stdc++.h>
// using namespace std;
// bool match(char a, char b)
// {
//     if (a == '(' && b == ')')
//     {
//         return 1;
//     }
//     else if (a == '[' && b == ']')
//     {
//         return 1;
//     }
//     else if (a == '{' && b == '}')
//     {
//         return 1;
//     }
//     return 0;
// }
// bool check(string exp)
// {
//     stack<char> s;
//     for (int i = 0; i < exp.length(); i++)
//     {
//         if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
//         {
//             s.push(exp[i]);
//         }
//         else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
//         {
//             if (!match(s.top(), exp[i]))
//             {
//                 return false;
//             }
//             else
//             {
//                 return true;
//             }
//         }
//     }
//     if (s.empty())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     string exp;
//     cin >> exp;
//     if (check(exp))
//     {
//         cout << "true" << endl;
//     }
//     else
//     {
//         cout << "false" << endl;
//     }

//     return 0;
// }