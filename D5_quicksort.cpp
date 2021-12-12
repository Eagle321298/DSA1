#include <iostream>
using namespace std;
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int partition(int a[], int low, int high)
{
    int piovt = a[low];
    int i = low+1;
    int j = high;
    int tmp;
    do
    {

        while (a[i] <= piovt)
        {
            i++;
        }
        while (a[j] > piovt)
        {
            j--;
        }
        if (i < j)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    } while (i <= j);
    tmp = a[j];
    a[j] = piovt;
    a[low] = tmp;
    return j;
}
void quickSort(int a[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}
int main()
{
    int a[] = {9,2 ,5};
    int n = 3;
    display(a, n);
    quickSort(a, 0, n - 1);
    cout<<endl;
    display(a, n);

    return 0;
}