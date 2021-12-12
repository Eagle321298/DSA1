#include <iostream>
using namespace std;
struct node
{
   int data;
   struct node *left;
   struct node *right;
   int height;
};
int max(int a, int b)
{
   return (a > b) ? a : b;
}
int getHeight(struct node *n) // to get height of node
{
   if (n == NULL)
   {
      return 0;
   }
   return n->height;
}
struct node *createnode(int key)
{
   struct node *n = (struct node *)malloc(sizeof(struct node));
   n->data = key;
   n->left = NULL;
   n->right = NULL;
   n->height = 1;
   return n;
}
int getBalancefactor(struct node *n)
{
   if (n == NULL)
   {
      return 0;
   }

   return getHeight(n->left) - getHeight(n->right);
}
struct node *rightrotation(struct node *y)
{
   struct node *x = y->left;
   struct node *t2 = x->right;

   x->right = y; //
   y->left = t2; //

   y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
   x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
   return x;
}
struct node *leftrotation(struct node *x)
{
   struct node *y = x->right;
   struct node *t2 = y->left;

   y->left = x;   //
   x->right = t2; //

   y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
   x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
   return y;
}
struct node *insertion(struct node *n,int key)
{
   if (n == NULL)
   {
      return createnode(key);
   }
   if (key < n->data)
   {
      n->left=insertion(n->left, key);
   }
   else if (key > n->data)
   {
      n->right=insertion(n->right, key);
   }
   n->height = max(getHeight(n->left), getHeight(n->right)) + 1;
   int bf = getBalancefactor(n);
   // left case
   if (bf > 1 && key < n->left->data)
   {
      return rightrotation(n);
   }
   // right right case
   else if (bf < -1 && key > n->right->data)
   {
      return leftrotation(n);
   }
   // left right case
   else if (bf > 1 && key > n->left->data)
   {
      n->left = leftrotation(n->left);
      return rightrotation(n);
   }
   // right left case
   else if (bf < -1 && key < n->right->data)
   {
      n->right = rightrotation(n->right);
      return leftrotation(n);
   }
   return n;
}
void Inorder(struct node *root)
{
   if (root != NULL)
   {
      cout << root->data << " ";
      Inorder(root->left);
      Inorder(root->right);
   }
}
int main()
{
   struct node *root = NULL;
   root = insertion(root, 10);
   root = insertion(root, 20);
   root = insertion(root, 30);
   root = insertion(root, 40);
   root = insertion(root, 50);
   root = insertion(root, 25);


   Inorder(root);
   return 0;
}