#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *nextptr;
} * head, *tmp;

void creatingList(int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    cout << "Input data:";
    int num;
    cin >> num;
    head->data = num;
    head->nextptr = NULL;
    tmp = head;

    for (int i = 2; i <= n; i++)
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        cout << "Input data:";
        cin >> num;
        p->data = num;
        p->nextptr = NULL;
        tmp->nextptr = p;
        tmp = tmp->nextptr;
    }
}
void displayList()
{
    tmp = head;
    while (tmp != NULL)
    {
        cout << "element: " << tmp->data << endl;
        tmp = tmp->nextptr;
    }
}

///////////////iterative method
// void seraching()
// {
//     cout << "Enter element which you want to search:";
//     int num, i = 1, flag = 0;
//     cin >> num;
//     tmp = head;
//     while (tmp != NULL)
//     {
//         if (tmp->data == num)
//         {
//             cout << num << " is found at index " << i << endl;
//             flag++;
//         }
//         i++;
//         tmp = tmp->nextptr;
//     }
//     if (flag == 0)
//     {
//         cout << num << " element is not found\n";
//     }
// }

/////////Recursive method
bool searching(struct node *head, int num)
{
    tmp = head;
    if (tmp == NULL)
    {
        return 0;
    }
    if (tmp->data == num)
    {
        return 1;
    }
    return searching(tmp->nextptr, num);
}

int main()
{
    cout << "---------------------------Creating singly Linked list-----------------------" << endl;
    cout << "Enter number of nodes:";
    int n, num;
    cin >> n;
    creatingList(n);
    displayList();
    cout << "Enter element which you want to search:";
    cin >> num;
    searching(head, num) ? cout << num << " is found "  : cout << "NOt found" << endl;

    return 0;
}