#include <iostream>
#include <unordered_set>
using namespace std;
void display(unordered_set<int> &s)
{
    unordered_set<int>::iterator i=s.begin();
    for ( i ; i != s.end(); i++)
    {
        cout<<*i<<" ";
    }cout<<endl;
    
}
int main()
{
    //unordered set is an associative container that contain unordered set of unique object
    unordered_set<int>uset1={34,21,64,71,12,34,22};
    display(uset1);         //it will return value in any order
    

 
   return 0;
}