// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[8] = {2, 10, 5, 15, 4, 8, 30, 6};//print next greater element
//     //2=10
//     // 10=15
//     // 5=15
//     // 4=8
//     // 8=30
//     // 30=-1   if greater not exist print "-1"
//     // 6=-1
//     for (int i = 0; i < 8; i++)
//     {
//         int next = -1;
//         for (int j = i + 1; j < 8; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 next = arr[j];
//                 break;
//             }
//         }
//         cout << arr[i] << "->" << next << endl;
//     }

//     return 0;
// }
//ttttttttttt_____________time complexity of above program is O(n^2)__________________________tttt

////////////////implementation of above program usign stack///////////////////
#include <bits/stdc++.h>
using namespace std;
void nxtGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    { 
        while (s.empty() == false && s.top() < arr[i])
        {
            cout << s.top() << "->" << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (s.empty() == false)
    {
        cout << s.top() << "-> -1" << endl;
        s.pop();
    }
}
int main()
{
    int arr[] = {34, 56, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    nxtGreater(arr, n);

    return 0;
}
//tttttttttttttttttttt___________Time complexity=O(n)_________________________ttttttttttttt