#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;
int main()
{
    vector<int> vec1 = {23, 11, 56};
    vector<vector<int>> vec2 = {{1, 2, 3}, {4, 5, 6}};
    vec2.push_back(vec1); //push element of vec1 at the end of vec2
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2[i].size(); j++)
        {
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }
    vec2[0].pop_back(); //remove last element of 1st row
    vec2[1].pop_back();
    vec2[2].pop_back();

    cout << "after removing last element" << endl;
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = 0; j < vec2[i].size(); j++)
        {
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "for list" << endl;
    list<int> l1 = {23, 11, 56};
    list<list<int>> l2 = {{1, 2, 3}, {4, 5, 6}};
    l2.push_back(l1);

    list<list<int>>::iterator i = l2.begin();
    for (i; i != l2.end(); i++)
    {
        list<int> j = *i;
        list<int>::iterator it = j.begin();
        for (it; it != j.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    cout << "For map in map" << endl;
    map<int, map<int, int>> m1;
    map<int, int> m2;
    m2.insert(make_pair(1, 2));
    m1.insert(make_pair(0, m2));
    //{0,{1,2}}
    map<int, map<int, int>>::iterator io = m1.begin();
    map<int, int>::iterator k = m2.begin();
    for (io; io != m1.end(); io++)
    {
        for (k; k != m2.end(); k++)
        {
            cout << io->first << endl;
            cout << k->first << endl;
            cout << k->second << endl;
        }
        cout << endl;
    }

    return 0;
}