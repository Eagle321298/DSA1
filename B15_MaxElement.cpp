#include <bits/stdc++.h>
using namespace std;
struct Max
{
    stack<int> s;
    int max;
    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            max = x;
            return;
        }
        if (max > x)
        {
            s.push(x);
        }
        else
        {
            s.push(2 * x - max);
            max = x;
        }
    }
    void peek()
    {
        if (s.empty())
        {
            cout << "stack is empty\n";
            return;
        }
        int a = s.top();
        if (a > max)
        {
            cout << max << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int b = s.top();
        s.pop();
        if (b < max)
        {
            cout << "removed element is " << b << endl;
        }
        else
        {
            max = 2 * max - b;
        }
    }
    void max_element()
    {
        cout << "max element of stack is " << max << endl;
    }
};

int main()
{
    Max s;
    s.push(8);
    s.push(10);
    s.push(16);
    s.push(3);
    s.push(72);
    s.max_element();
    s.peek();
    s.pop();
    s.peek();
    s.max_element();

    return 0;
}