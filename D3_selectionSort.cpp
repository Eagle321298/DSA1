#include <iostream>
using namespace std;
void selectionSort(int *a, int n)
{
    int k;
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                 k = j;
            }
        }
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
    }
}
void display(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[6] = {34, 12, 78, 11, 90, 3};
    selectionSort(a, 6);
    display(a, 6);
    return 0;
}