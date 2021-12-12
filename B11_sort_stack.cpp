// #include <bits/stdc++.h>
// using namespace std;
// // function to return sorted stack
// stack<int> sorting(stack<int> input)
// {
//     stack<int> tmpstack;
//     int t;
//     while (!input.empty())
//     {
//         t = input.top();
//         input.pop();

//         // while (!tmpstack.empty() && tmpstack.top() > t)////for descending order
//         while (!tmpstack.empty() && tmpstack.top() < t)//to get ascending order
//         {
//             input.push(tmpstack.top());
//             tmpstack.pop();
//         }
//         tmpstack.push(t);
//     }
//     return tmpstack;
// }
// int main()
// {
//     stack<int> input;
//     input.push(10);
//     input.push(30);
//     input.push(28);
//     input.push(90);
//     input.push(5);
//     stack<int> tmpstack = sorting(input);
//     cout << "sorted stack:";
//     while (!tmpstack.empty())
//     {
//         cout << tmpstack.top() << " ";
//         tmpstack.pop();
//     }
//     return 0;
// }
////////////////in above method we required additional data structure i.e. tmpstack and loop for sorting
// _______________________________________________________________________________________________________________________________________
// __________________________________________________________________________________________________________________________________________________

// C++ program to sort a stack using recursion witout additional data sturcture and loop
#include <bits/stdc++.h>
using namespace std;
// //https://www.techiedelight.com/recursive-solution-sort-stack/-----------for more reference

void insertatCorrect(stack<int> &s, int x) // for using already created stack in function we need to put "&" this referece pointer
// void insertatCorrect(stack<int> s, int x)/////////////////other wise it seem like we have created new stack., this will not work
{
    // if (s.empty() || s.top() < x)/////descending order
    if (s.empty() || s.top() > x) /////ascending order
    {
        s.push(x);
        return;
    }
    int element = s.top();
    s.pop();
    insertatCorrect(s, x);
    s.push(element);
}
void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    sort(s);
    insertatCorrect(s, x);
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
    s.push(9);
    s.push(-1);
    s.push(-8);
    s.push(-1);
    s.push(120);
    s.push(2);
    sort(s);
    print(s);

    return 0;
}
