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

void Inorder(struct node *root)//inorder travesal of bst gives ascending order
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}
struct node *inorderpredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deletion(struct node *root, int key)
{
    struct node *inorderPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (key < root->data)
    {
        root->left=deletion(root->left, key);
    }
    else if (key > root->data)
    {
        root->right=deletion(root->right, key);
    }
    else
    {
        inorderPre = inorderpredecessor(root);
        root->data = inorderPre->data;
        root->left = deletion(root->left, inorderPre->data);
    }
    return root;
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

    Inorder(r);
    cout << endl;
    deletion(r, 15);
    Inorder(r);

    return 0;
}