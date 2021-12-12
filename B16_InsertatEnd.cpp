// #include <bits/stdc++.h>
// using namespace std;
// void insertAtBottom(int x, stack<int> s)
// {
//     stack<int> tmp;

//     while (!s.empty())
//     {
//         tmp.push(s.top());
//         s.pop();
//     }

//     s.push(x);

//     while (!tmp.empty())
//     {
//         s.push(tmp.top());
//         tmp.pop();
//     }
//     while (!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }
// }
// int main()
// {
//     stack<int> s;
//     s.push(12);
//     s.push(85);
//     s.push(75);
//     s.push(45);
//     insertAtBottom(90, s);

//     return 0;
// }
/////////instead of creating tmp stack, we can do this by using reccursion////////////
#include <bits/stdc++.h>
using namespace std;
void insertAtEnd(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int x = s.top();
    s.pop();
    insertAtEnd(s, data);
    s.push(x);
}
void print(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(34);
    s.push(97);
    s.push(21);
    s.push(89);
    insertAtEnd(s, 10);
    print(s);
    return 0;
}