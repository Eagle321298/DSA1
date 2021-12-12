// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,4,5,90,120,80};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         int flag=0;
//         for (int j = i; j >= 0; j--)
//         {
//             if (arr[i] >= arr[j])
//             {
//                 flag++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         cout << flag << " ";
//     }

//     return 0;
// }
//////____________________________Time complexity=O(n^2)______________________tttttt
#include <bits/stdc++.h>
using namespace std;
void stockSpan(int arr[], int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        int flag = 1;
        if (s.empty() == false)
        {
            if (s.top() >= arr[i])
            {
                flag++;
            }
            else
            {
                cout << s.top() << "=" << flag << endl;
                s.pop();
                // break;
            }
            if (i == 0)
            {
                cout << s.top() << "=" << flag << endl;
                s.pop();
            }
        }
    }
}
int main()
{
    int arr[] = {200, 4, 5, 90, 120, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    stockSpan(arr, n);

    return 0;
}