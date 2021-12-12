#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int sorted[100];
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            sorted[k] = a[i];
            i++;
            k++;
        }
        else
        {
            sorted[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        sorted[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        sorted[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = sorted[i];
    }
}
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int a[] = {34, 22, 77, 23, 53, 11, 97};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<n<<endl;
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}