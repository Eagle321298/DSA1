#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *nextptr;
} * head, *tmp, *tmp2;

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
void searching()
{
    cout << "Enter element which you want to search:";
    int num, i = 1, flag = 0;
    cin >> num;
    tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == num)
        {
            cout << num << " is found at index " << i << endl;
            flag++;
        }
        i++;
        tmp = tmp->nextptr;
    }
    if (flag == 0)
    {
        cout << num << " element is not found\n";
    }
    else
    {
        cout << num << " element is occur " << flag << " times\n";
    }
}
int c = 0;
/////////Recursive method
int Recursive_searching(struct node *head, int num)
{
    tmp = head;

    if (tmp == NULL)
    {
        return c;
    }
    else if (tmp->data == num)
    {
        c++;
    }
    return Recursive_searching(tmp->nextptr, num);
}
////////////Frequecy of each element
void individual_searching()
{
    tmp2 = head;
    while (tmp2 != NULL)
    {
        int num, i = 1, flag = 0;
        tmp = head;
        num = tmp2->data;
        while (tmp != NULL)
        {
            if (tmp->data == num)
            {
                flag++;
            }
            i++;
            tmp = tmp->nextptr;
        }

        cout << num << " element is occur " << flag << " times\n";

        tmp2 = tmp2->nextptr;
    }
}
int main()
{
    cout << "---------------------------Creating singly Linked list-----------------------" << endl;
    cout << "Enter number of nodes:";
    int n, num;
    cin >> n;
    creatingList(n);
    displayList();
    // searching();
    // cout << "Enter element which you want to search:";
    // cin >> num;
    // cout << num << "Element occur " << Recursive_searching(head, num) << " times\n";
    individual_searching();

    return 0;
}