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
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return height(root->left) + height(root->right) + 1;
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
    cout << diameter(root) << endl;

    return 0;
}