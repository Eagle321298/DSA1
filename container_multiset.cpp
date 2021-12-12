#include <iostream>
#include <set>
using namespace std;
void display(multiset<int> &s)
{
    multiset<int>::iterator i=s.begin();
    for ( i ; i != s.end(); i++)
    {
        cout<<*i<<" ";
    }cout<<endl;
    
}
int main()
{
    //multiset is an associative container  contain ordered set that can have duplicate value
    multiset<int>set1={11,34,2,5,1,9,2,9,27};
    multiset<int>set2={43,26,90,23};
    display(set1);
    cout<<endl;

    set1.erase(2);
    set1.erase(27);                     //BY VALUE
    multiset<int>::iterator i=set1.begin();
    set1.erase(i);                      //by passing iterator
    display(set1);
    cout<<endl;

    set1.erase(set1.begin(),set1.find(11));         //erase elements from begin to 11 except 11
    display(set1);


 
   return 0;
}