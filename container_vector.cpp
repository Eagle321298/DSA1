#include <iostream >
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v2)
{
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element;
    cout << "Enter element of vector1" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    vector<int> vec2 = {11, 22, 33};
    cout << "at " << vec2.at(2) << endl;
    vec2.push_back(44); //insert no. at end
    vec2.push_back(55);
    vec2.push_back(66);
    vec2.push_back(77);
    vec2.push_back(88);
    vec2.push_back(99);
    display(vec2);

    vec2.pop_back(); //delete last no.

    vector<int>::iterator iter = vec2.begin();
    vec2.insert(iter + 1, 10); //to insert element at iter point
    vec2.erase(iter + 3);      //to erase element of iter pointing
    display(vec2);
    vec2.erase(iter + 5, iter + 7);
    display(vec2);
    vec1.swap(vec2); //swapping
    cout << "after swapping:-" << endl;
    display(vec1);
    display(vec2);


    vector<char>vec3(4,'d');
    display(vec3);

    return 0;
}