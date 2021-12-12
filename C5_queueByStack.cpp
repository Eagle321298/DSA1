#include <bits/stdc++.h>
using namespace std;
////implementing queue by using stack operations
/////Method- 1(by making enqeue operation costly)
////T-O(n) for enqueue
////T-O(1) for dequeue
/// space complexity O(n) i.e. size of stack;

// struct queueByStack
// {
//     stack<int> s1, s2;
//     void Enqeue(int data)
//     {
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(data);
//         while (!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     void Deqeue()
//     {
//         if (s1.empty())
//         {
//             cout << "queue is empty" << endl;
// exit(0);
//         }
//         cout << s1.top() << endl;
//         s1.pop();
//     }

// } q;

// int main()
// {
//     queueByStack q;
//     q.Enqeue(10);
//     q.Enqeue(20);
//     q.Enqeue(30);
//     q.Deqeue();
//     q.Deqeue();
//     q.Deqeue();

//     return 0;
// }
// ______________________Method-2 (by making dequeue operation costly)________________________________
////T-O(1) for enqueue
////T-O(n) for dequeue
/// space complexity O(n) i.e. size of stack;
// struct queueByStack
// {
//     stack<int> s1, s2;
//     void Enqeue(int data)
//     {
//         s1.push(data);
//     }
//     void Deqeue()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             cout << "queue is empty" << endl;
//             exit(0);
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         cout << "deleted element:" << s2.top() << endl;
//         s2.pop();
//     }

// } q;

// int main()
// {
//     queueByStack q;
//     q.Enqeue(10);
//     q.Enqeue(20);
//     q.Enqeue(30);
//     q.Deqeue();
//     q.Deqeue();
//     q.Deqeue();

//     return 0;
// }
////_____________Method-3 (using one user stack and one Function Call Stack)________________________
struct queueByStack
{
    stack<int> s1;
    void Enqeue(int data)
    {
        s1.push(data);
    }
    int Deqeue()
    {
        if (s1.empty())
        {
            cout << "queue is empty" << endl;
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int item = Deqeue();
        s1.push(x);
        return item;
    }

} q;

int main()
{
    queueByStack q;
    q.Enqeue(10);
    q.Enqeue(20);
    q.Enqeue(30);
    q.Enqeue(40);
    cout<<q.Deqeue()<<endl;
    cout<<q.Deqeue()<<endl;
    cout<<q.Deqeue()<<endl;
    

    return 0;
}