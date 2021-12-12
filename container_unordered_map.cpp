#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void display(unordered_map<int, string> &v)
{
    unordered_map<int, string>::iterator i = v.begin();
    for (i; i != v.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
}
int main()
{   //unordered map contain unordered key-value pair
    //unordered map cant have duplicate key-value pairs
    //we can done insertion,deletion and alter value
    unordered_map<int,string>umap1={{340,"joshef"},{219,"swapnali"},{219,"sarika"},{176,"Aaysha"}};
    display(umap1);
    cout<<endl;

    umap1.at(340)="Poonam";
    umap1.at(219)="Puja";
    display(umap1);
    cout<<endl;

    umap1.insert(make_pair(101, "sweety"));
    umap1.insert(make_pair(300, "Ishita"));
    display(umap1);


   return 0;
}