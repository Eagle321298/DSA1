#include <iostream>
#include <queue>
//first in first out
using namespace std;

int main()
{
    queue<int> queue1;
    queue1.push(23);
    queue1.push(43);
    queue1.push(77);
    queue1.push(35);

    cout << "first element " << queue1.front() << endl;
    cout << "first element " << queue1.back() << endl;
    queue1.pop();
    queue1.push(1);
    ///in queue insertion done at last and deletion done at first
    cout<<"first element "<<queue1.front()<<endl;
    cout<<"last element "<<queue1.back()<<endl;

    
    

    return 0;
}