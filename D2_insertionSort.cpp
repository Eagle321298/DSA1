#include <iostream>
using namespace std;
void insertionSort(int *a, int size)
{
   int n=size;
   for (int i = 1; i < n; i++)
   {
      int j = i - 1;
      int key = a[i];
      while (j >= 0 && a[j] > key)
      {
         a[j + 1] = a[j];
         j--;
      }
      a[j + 1] = key;
   }
}
void display(int *a, int size)
{
   for (int i = 0; i < size; i++)
   {
      cout<<a[i]<<" ";
   }
   
}
int main()
{
   int a[6] = {34, 12, 78, 11, 90, 3};
   insertionSort(a, 6);
   display(a,6);
   return 0;
}