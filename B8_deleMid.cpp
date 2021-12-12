#include <bits/stdc++.h>
using namespace std;
// to delete middle element of stack, first will pop all elements of stack into x variable
// when stack will empty or when all elements are traversed
//  function will return variable
//  then push all variables into that stack except mid one
void deletMid(stack<int> &s, int n, int current) //& is referece to function of existing stack
{
    if (s.empty() || n == current)
    {
        return;
    }
    int x = s.top();
    s.pop();
    deletMid(s, n, current + 1);
    if (current != n / 2)
    {
        s.push(x);
        cout << s.top() << endl; // this just for checking, how code does work
    }
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int current = 0;
    deletMid(s, s.size(), current);
    cout << "After deleting middle element:";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}