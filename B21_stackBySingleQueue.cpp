#include <bits/stdc++.h>
using namespace std;
////implementing stack by using single queue
struct stack
{
    queue<int> q;
    void push(int data)
    {
        q.push(data);
        int l = q.size();
        for (int i = 0; i < l - 1; i++)
        {
            int a = q.front();
            q.pop();
            q.push(a);
        }
    }
    void pop()
    {
        cout << "deleted element:" << q.front() << endl;
        q.pop();
    }
    void top()
    {
        cout << q.front() << endl;
    }
} s;

int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.top();
    s.pop();
    s.top();
    return 0;
}