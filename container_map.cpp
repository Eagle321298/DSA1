#include <iostream>
#include <string>
#include <map>
using namespace std;
void display(map<int, string> &m)
{
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " ";            //for printing map key
        cout << i->second << endl;          //for printing value-string value
    }
}
int main()
{   //map is associative container
    map<int, string> map1 = {{401, "Rutika"}, {101, "Rohit"},{101,"Ishita"}, {301, "Sadhana"}};
    //map contain sorted key-value pair->
    display(map1);
    cout<<endl;

    map1.at(101)="Poonam";          //to change value at given keypoint
    display(map1);

    cout<<"value at 401 :"<<map1.at(401)<<endl;
    map<int,string>::iterator i=map1.begin();
    map1.erase(i);
    display(map1);

    //to insert key & value at particular location as map is sorted
    //2 apporach
    map1.insert(pair<int,string>(300,"Shardha"));
    map1.insert(make_pair(109,"Aarya"));

    display(map1);

    return 0;
}