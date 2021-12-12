#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;
void display(vector<int> &s)
{
    vector<int>::iterator i = s.begin();
    for (i; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1 = {45, 23, 11, 93, 11, 86};

    int mycount = count(vec1.begin(), vec1.end(), 11); //count number of appearnace
    cout << "11 appears " << mycount << " times\n";

    sort(vec1.begin(), vec1.end()); //sorting function
    display(vec1);
    cout << endl;

    reverse(vec1.begin(), vec1.end()); //reverse
    display(vec1);
    cout << endl;

    //max element
    cout << "max:-" << *max_element(vec1.begin(), vec1.end()) << endl;
    //Min element
    cout << "Min:-" << *min_element(vec1.begin(), vec1.end()) << endl;

    vector<int> vec2 = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    cout << "looking for a 3... ";
    if (binary_search(vec2.begin(), vec2.end(), 3)) //binary search
        cout << "found!\n";
    else
        cout << "not found.\n";



    int arr[9] = {12, 44, 22, 66, 11, 12, 12, 12};
    int c=count(arr,arr+9,12);//counting numbers in array
    cout<<"12 appears "<<c<<" times\n";

    if (equal(vec2.begin(),vec2.end(),arr))//test wheather elements in two ranges are equal or not
    {
        cout<<"The content of array and vector are same\n";
    }
    else
    {
        cout<<"The content of array and vector are not same\n";
    }
    



    return 0;
}
