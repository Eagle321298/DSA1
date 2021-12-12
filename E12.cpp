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
void oddLevels(node *root, bool isodd = false)
{
    if (root == NULL)
    {
        return;
    }
    if (isodd)
    {
        cout << root->data << " " << endl;
    }
    oddLevels(root->left, !isodd);
    oddLevels(root->right, !isodd);
}
//      20                  --->1
//     /  \
//    8    22
//   / \      
//  4   12                  --->3
//      / \
//     10  14
int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(22);
    root->left->left = new node(4);
    root->left->right = new node(12);
    root->left->right->left = new node(10);
    root->left->right->right = new node(14);
    oddLevels(root);
    return 0;
}