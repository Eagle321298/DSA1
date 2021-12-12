#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }cout<<endl;
}

int main()
{
    list<int> list1 = {11, 22, 33, 44};
    list<int> list2 = {10, 20, 30, 40};
    list<int>::iterator it = list2.begin();
    list2.insert(it, 66);
    display(list2);

    list2.push_back(2);
    list2.push_front(1);
    list2.pop_back();
    display(list2);

    list2.swap(list1);
    display(list2);
    display(list1);

    list2.sort();
    display(list2);

    list2.merge(list1);
    display(list2);
}