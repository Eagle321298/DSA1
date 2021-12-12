#include <iostream>
using namespace std;
void passing(int arr[], int size)
{
    int n = size;
    for (int i = 0; i < n; i++)
    {
        int isSorted = 1;
        cout << "no. of passes:" << i + 1 << endl;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSorted = 0;
            }
        }
        if (isSorted)//to check whether given array is sorted or not.
        {
            return;
        }
    }
}
int main()
{
    // int arr[5] = {2,4,6,7,8};
    // int arr[5] = {24,52,21,1,6};
    int arr[5] = {6,7,8,34,22};
    passing(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}