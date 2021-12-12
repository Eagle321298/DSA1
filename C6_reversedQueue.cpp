// #include <bits/stdc++.h>
// using namespace std;
// struct reverseQ
// {
//     queue<int> q;
//     void push(int data)
//     {
//         q.push(data);
//         int l = q.size();
//         for (int i = 0; i < l - 1; i++)
//         {
//             int a = q.front();
//             q.pop();
//             q.push(a);
//         }
//     }
//     void pop()
//     {
//         cout<<"deleted element: "<<q.front()<<endl;
//         q.pop();
//     }
// } q;

// int main()
// {
//     reverseQ q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.pop();
//     q.pop();

//     return 0;
// }
/////____________Reverse queue without modifying push or pop function____________________________
// this can be done by using stack
// #include <bits/stdc++.h>
// using namespace std;
// void reverse(queue<int> &q)
// {
//     stack<int> s;
//     while (!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }
//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
// }
// int main()
// {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     reverse(q);
//     cout<<"after reversing:"<<endl;
//     cout<<"front element:"<<q.front()<<endl;
//     cout<<"rear element:"<<q.back()<<endl;

//     return 0;
// }
//////_____________________________________reversed queue by recursion_____________________________________________________
#include <bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q)
{
    int x = q.front();
    q.pop();
    if (q.empty())
    {
        q.push(x);
        return;
    }
    reverse(q);
    q.push(x);
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    reverse(q);
    cout << "after reversing:" << endl;
    cout << "front element:" << q.front() << endl;
    cout << "rear element:" << q.back() << endl;
    cout << "size:" << q.size() << endl;
    q.pop();
    cout << "front element:" << q.front() << endl;

    return 0;
}