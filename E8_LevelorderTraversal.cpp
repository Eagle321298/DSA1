#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
node *newnode(int key)
{
    node *tmp = new node;
    tmp->data = key;
    tmp->left = tmp->right = NULL;
    return tmp;
}
// void levelorderTraversal(node *a)
// {
//     if (a == NULL)
//     {
//         return;
//     }
//     queue<node *> q;
//     q.push(a);
//     while (q.empty() == false)
//     {
//         node *b = q.front();
//         cout << b->data << " ";
//         q.pop();
//         if (b->left != NULL)
//         {
//             q.push(b->left);
//         }
//         if (b->right != NULL)
//         {
//             q.push(b->right);
//         }
//     }
// }
void reverselevelorderTraversal(node *a)
{
    if (a == NULL)
    {
        return;
    }
    queue<node *> q;
    stack<int>s;
    q.push(a);
    while (q.empty() == false)
    {
        node *b = q.front();
        s.push(b->data);
        q.pop();
        if (b->right != NULL)
        {
            q.push(b->right);
        }
        if (b->left != NULL)
        {
            q.push(b->left);
        }
    }
    while (!s.empty())
    {
        cout<<s.top()<<" "<<endl;
        s.pop();
    }
    
}
int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);

    levelorderTraversal(root);
    reverselevelorderTraversal(root);
    return 0;
}