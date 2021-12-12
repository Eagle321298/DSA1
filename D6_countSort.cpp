#include <iostream>
using namespace std;
void display(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
void countSort(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int count[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int index = a[i];
        count[index] = count[index] + 1;
    }
    int sorted[n];
    int k = 0, j = 0;
    while (j < max + 1)
    {
        if (count[j] > 0)
        {
            sorted[k] = j;
            // cout<<sorted[k]<<endl;
            k++;
            count[j] = count[j] - 1;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<sorted[i]<<" ";
    }
    
}
int main()
{
    int a[] = {3, 1, 9, 7, 1, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);
    display(a, n);
    cout<<endl;
    countSort(a, n);


    return 0;
}