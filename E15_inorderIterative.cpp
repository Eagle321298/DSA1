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
void inorder(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (!s.empty() || curr != NULL)
    {
        if (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = s.top();
            cout << curr->data << " ";
            s.pop();
            curr = curr->right;
        }
    }
}
void preorder(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (!s.empty() || curr != NULL)
    {
        if (curr != NULL)
        {
            cout << curr->data << " ";
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            curr = s.top();
            s.pop();
            curr = curr->right;
        }
    }
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
    inorder(root);cout<<endl;
    preorder(root);
    return 0;
}