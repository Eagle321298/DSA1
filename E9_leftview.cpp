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
void leftview(node *a)
{
    if (a == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(a);
    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            node *b = q.front();
            q.pop();
            // if (i == n-1)//for right view
            if (i == 0)//for left view
            {
                cout << b->data << " ";
            }
            if (b->left != NULL)
            {
                q.push(b->left);
            }
            if (b->right != NULL)
            {
                q.push(b->right);
            }
        }
    }
}

int main()
{
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->right = newnode(6);
    root->right->right->right = newnode(7);

    leftview(root);
    return 0;
}