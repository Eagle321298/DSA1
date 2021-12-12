#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //create max_heap:->arrange element in descending order
    priority_queue<int>pq1;

    pq1.push(34);
    pq1.push(22);
    pq1.push(78);
    pq1.push(40);

    //order of pq--> 78,40,34,22
    //queue->first in first out

    cout<<"top element "<<pq1.top()<<endl;
    pq1.pop();
    cout<<"new top "<<pq1.top()<<endl;
    cout<<endl;

    //create min_heap-> arrange element in ascending order
    priority_queue<int,vector<int>,greater<int>>pq2;

    pq2.push(3);
    pq2.push(5);
    pq2.push(1);
    pq2.push(4);

    //order of pq2->1,3,4,5
    cout<<"top element "<<pq2.top()<<endl;
    pq2.pop();
    cout<<"new top "<<pq2.top()<<endl;


   
 
   return 0;
}