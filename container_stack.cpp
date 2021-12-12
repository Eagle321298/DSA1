#include <iostream>
#include <stack>
//last in first out
using namespace std;
int main()
{
    stack<int>stack1,stack2;
    stack1.push(10);
    stack1.push(30);
    stack1.push(20);
    stack1.push(50);
    cout<<"Enter elements of stack2"<<endl;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin>>a;
        stack2.push(a);
    }
    
    //insertion and deletion done at last
    cout<<"top element "<<stack1.top()<<endl;
    stack1.pop();
    cout<<"new top element "<<stack1.top()<<endl;
    stack1.push(80);
    cout<<"insertion "<<stack1.top()<<endl;
    cout<<"size "<<stack1.size()<<endl;

    //swap
    stack1.swap(stack2);
    cout<<stack1.size()<<endl;
    cout<<stack2.size();


   return 0;
}