#include <iostream>
#include <climits>
using namespace std;
int maxsum(int arr[], int n)
{
    int max = INT_MIN;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];
        if (curr > max)
        {
            max = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return max;
}
int main()
{
    int arr[] = {
        -3,
        4,
        1,
        -2,
        -3,
        4,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxsum(arr, n);

    return 0;
}