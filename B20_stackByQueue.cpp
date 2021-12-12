#include <bits/stdc++.h>
using namespace std;
////we are implementing stack(LIFO) by using only queue operations
////Method-1 (by making push operation costly)
////T-O(n) for push
////T-O(1) for pop
/// space complexity O(n) i.e. size of stack;
// struct stack
// {
//     queue<int> q1, q2;
//     void push(int data)
//     {
//         q2.push(data);
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> q = q1;
//         q1 = q2;
//         q2 = q;
//     }
//     void pop()
//     {
//         cout << q1.front() << endl;
//         q1.pop();
//     }
//     void top()
//     {
//         cout << q1.front() << endl;
//     }

// } s;

// int main()
// {
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.pop();
//     s.top();
//     return 0;
// }
////_______________________Method-2 (by making pop operation costly)___________________________________________________________

////T-O(1) for push
////T-O(n) for pop
/// space complexity O(n) i.e. size of stack;
struct stack
{
    queue<int> q1, q2;
    void push(int data)
    {
        q1.push(data);
    }
    void pop()
    {
        if (q1.empty())
        {
            cout << "queue is empty" << endl;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        cout << "deleted element:" << q1.front() << endl;
        q1.pop();
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    void top()
    {
        cout << q1.back() << endl;
    }
    void size()
    {
        cout<<q1.size()<<endl;
    }

} s;

int main()
{
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.top();
    s.size();
    return 0;
}