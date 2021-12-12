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
node *lca(node *root, int a, int b)
{
    if (root->data > a && root->data > b)
    {
        root = lca(root->left, a, b);
    }
    else if (root->data < a && root->data < b)
    {
        root = lca(root->right, a, b);
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
    node *ans=lca(root,10,14);
    cout<<ans->data<<endl;
    return 0;
}