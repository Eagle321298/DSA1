#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int,50>arr1={11,22,33};
    array<int,4>arr2={44,55,66,77};

    cout<<"at "<<arr2.at(2)<<endl;
    cout<<"front "<<arr2.front()<<endl;
    cout<<"back "<<arr2.back()<<endl;
    arr2.at(2)=99;
    for (auto it =arr2.begin(); it !=arr2.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
   
   
    cout<<"size "<<arr1.size()<<endl;
    cout<<"size "<<arr2.size()<<endl;
    cout<<"max_size "<<arr1.max_size()<<endl;
    cout<<"max_size "<<arr2.max_size()<<endl;
    
    array<int,20>arr3;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr3.at(i);
    }cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr3.at(i)<<" ";
    }
    
    
    


 
   return 0;
}