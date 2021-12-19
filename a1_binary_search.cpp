//////***********Binary search is possible only when given array is sorted
// #include <stdio.h>
#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1;
    while (low <= high) // keep searching until low<=high
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    return -1; // to show entered no. is not in the list
}
int lower_bound(int arr[], int size, int item)
{
    int l = 0, h = size - 1;
    int mid;
    while (h - l > 0)
    {
        mid = (l + h) / 2;
        if (item > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid;
        }
    }
    if (item == arr[l])
    {
        return l;
    }
    else if (item == arr[h])
    {
        return h;
    }
    else
    {
        return -1;
    }
}
int upper_bound(int arr[], int size, int item)
{
    int l = 0, h = size - 1;
    int mid;
    while (h - l > 1)
    {
        mid = (l + h) / 2;
        if (item < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid;
        }
    }
    if (item == arr[h])
    {
        return h;
    }
    else if (item == arr[l])
    {
        return l;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {2, 4, 50, 50, 300, 300, 300, 300, 300};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result=binarysearch(arr, size,4);
    if (result == -1)
    {
        cout<<"element is not found"<<endl;
    }
    else
    {
        cout<<"elment is found at index "<<result<<endl;
    }
    
    cout << lower_bound(arr, size, 50) << endl;
    cout << upper_bound(arr, size, 50) << endl;

    cout << lower_bound(arr, size, 300) << endl;
    cout << upper_bound(arr, size, 300) << endl;
    return 0;
}