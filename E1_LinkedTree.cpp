#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main()
{
    //constructing nodes
    struct node *r=createnode(8);
    struct node *a1=createnode(45);
    struct node *a2=createnode(77);
    struct node *b1=createnode(32);

    //       8
    //      / \
    //     45  77
    //    /
    //   32
    
    //linking all nodes
    r->left=a1;
    r->right=a2;
    a1->left=b1;

 
   return 0;
}