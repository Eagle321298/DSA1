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

void print(node *root, int k)
{
    // cout<<k<<' ';
    if(root==NULL )
    {
        return ;
    }
    else if (k == 0 && root!=NULL)
    {
        cout << root->data << endl;
        return ;
    }
    if (k > 0)
    {
        print(root->left, k - 1);
        print(root->right, k - 1);
    }
}
int main()
{
    node *a = new node(1);
    a->left = new node(2);
    a->right = new node(3);
    a->left->left = new node(4);
    a->right->left = new node(8);
    a->left->right = new node(5);
    a->right->right = new node(6);
    a->right->right->right = new node(7);

    print(a, 0);

    return 0;
}