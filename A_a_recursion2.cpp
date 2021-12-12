// NOn-tail recursion-recursive function is said to be non recursion  if recursive call is not last thing done by function. after returning bac,, there is something lefft to evaluate
//  #include <iostream>
//  using namespace std;
//  void fun(int n)
//  {
//      if (n==0)
//      {
//          return;
//      }
//      fun(n-1);
//      cout<<n<<endl;
//  }
//  int main()
//  {
//      fun(5);
//     return 0;
//  }

//////_______________________Nested recursion______________________________________
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    return fun(fun(n + 11));
}
int main()
{
    int r = fun(95);
    cout << r << endl;

    return 0;
}