#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int item)
    {
        data = item;
        left = NULL;
        right = NULL;
    }
};

bool isBst(node *root, node *min = NULL, node *max = NULL)
{
    if (root == NULL)
    {
        return 1;
    }
    if (min != NULL && min->data >= root->data)
    {
    }
    if (max != NULL && max->data <= root->data)
    {
        return 0;
    }
    return isBst(root->left, min, root) and isBst(root->right, root, max);
}

int main()
{
    // constructing nodes
    node *r = new node(12);
    node *a1 = new node(8);
    node *a2 = new node(15);
    node *b1 = new node(4);
    node *b2 = new node(10);
    node *c1 = new node(13);
    node *c2 = new node(20);

    //         12
    //       /    \
    //     8      15
    //    / \    /  \
    //   4   10  13  20

    // linking all nodes
    r->left = a1;
    r->right = a2;
    a1->left = b1;
    a1->right = b2;
    a2->left = c1;
    a2->right = c2;

    preorder(r);
    cout << endl;
    if (!isBst(r, NULL, NULL))
    {
        cout << "not bst" << endl;
    }
    else
    {
        cout << "is bst" << endl;
    }

    return 0;
}