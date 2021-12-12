#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
    node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};
stack<int> s;
node *inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        s.push(root->data);
        inorder(root->right);
    }
    return root;
}

int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(22);
    root->left->left = new node(4);
    root->left->right = new node(12);
    root->left->right->left = new node(10);
    root->left->right->right = new node(14);
    root->left->right->right->right = new node(15);
    inorder(root);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}