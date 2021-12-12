#include <iostream>
#include <set>

using namespace std;
void display(set<int> &s)
{
    set<int>::iterator i = s.begin();
    for (i; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{ //set is sorted set of unique object
    set<int> set1 = {10, -20, 50, 10, 30, 40};
    display(set1);

    set1.insert(80);             
    set1.insert(76);             
    display(set1);

   
    return 0;
}