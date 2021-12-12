#include <iostream>
using namespace std;
void merge(int *a1, int *a2, int *arr)
{
    int i = 0, j = 0, k = 0;
    while (i < 4 && j < 3)
    {
        if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = a2[j];
            j++;
            k++;
        }
    }
    while (i < 4)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }
    while (j < 3)
    {
        arr[k] = a2[j];
        j++;
        k++;
    }
}
int main()
{
    int a1[4] = {1, 3, 4, 20};
    int a2[3] = {2, 5, 10};
    int arr[7];
    merge(a1, a2, arr);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
