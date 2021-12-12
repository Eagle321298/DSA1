#include <iostream>
#include <string>
#include <map>
using namespace std;
void display(multimap<int, string> &v)
{
    multimap<int, string>::iterator i = v.begin();
    for (i; i != v.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
}
int main()
{
    multimap<int, string> map1 = {{101, "Disha"}, {106, "Rita"}, {103, "john"}, {101, "Rose"}};
    multimap<int, string> map2 = {{201, "godfather"}, {239, "Riya"}, {329, "sofia"}};
    //in multimap we can use duplicate keypoint
    display(map1);
    cout << endl;
    // map1.at(101)="patty";           //we cant alter value bcz while searching keypoint compiler will get confuse
    //we can insert/delete value in multimap, but cant alter it
    map1.insert(make_pair(101, "sweety"));
    map1.insert(make_pair(300, "Ishita"));
    display(map1);
    cout << endl;

    multimap<int, string>::iterator i = map1.begin();
    map1.erase(i);
    display(map1);
    cout << endl;

    //return no. of element matching with given keypoint
    cout << "cout no 101:-" << map1.count(101) << endl;
    //return no. of element in multimap
    cout << "size of map2:-" << map1.size() << endl;

    map1.swap(map2);
    cout << "map1:- ";
    display(map1);
    cout << endl;
    cout << "map2:- ";
    display(map2);
    cout << endl;

    return 0;
}