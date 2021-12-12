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

bool ismirror(node *a, node *b)
{
    if (a == NULL && b == NULL)
    {
        return true;
    }
    else if (a == NULL || b == NULL)
    {
        return false;
    }
    return a->data == b->data &&ismirror(a->left, b->right) && ismirror(a->right, b->left);
}
int main()
{
    node *a = new node(1);
    node *b = new node(1);

    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->left->right = new node(5);

    b->left = new node(3);
    b->right = new node(2);
    b->right->left = new node(5);
    b->right->right = new node(4);
    if (ismirror(a, b))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}