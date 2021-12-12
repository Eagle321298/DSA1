// there are 6 types of recursion
// >direct recursion
// >indirect recursion
// >Tail recursion-If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion.
// >non-tail recursion
// >nested recursion
// >tree recusion.
///__________________Direct recursion & tail recursion____________________________
// #include <iostream>
// using namespace std;
// void fun(int n)
// {
//     if (n > 0)
//     {
//         cout << n << endl;
//     }
//     fun(n - 1);
// }
// int main()
// {
//     fun(6);
//     return 0;
// }
// ************time complexity=O(n)
// ************space complexity=O(n)

// Converting Tail Recursion into Loop
#include <iostream>
using namespace std;
void fun(int y)
{
    while (y > 0)
    {
        cout << y << " ";
        y--;
    }
}
int main()
{
    int x = 3;
    fun(x);
    return 0;
}
// ************time complexity=O(n)
// ************space complexity=O(1)
// when the program executes,the main memory divided into three parts. One part for code section, the second one is heap memory and another one is stack memory. Remember that the program can directly access only the stack memory, it can’t directly access the heap memory so we need the help of pointer to access the heap memory.
// Let’s now understand why space complexity is less in case of loop ?
// In case of loop when function “(void fun(int y))” executes there only one activation record created in stack memory(activation record created for only ‘y’ variable) so it takes only ‘one’ unit of memory inside stack so it’s space complexity is O(1) but in case of recursive function every time it calls itself for each call a separate activation record created in stack.So if there’s ‘n’ no of call then it takes ‘n’ unit of memory inside stack so it’s space complexity is O(n). 


////__________________________Indirect recursion__________________________________
/////make such series from 1 - 10 where if n is even then add +1 in it else -1;
/////2 1 4 3 6 5 8 7 10 9
#include <iostream>
using namespace std;
void odd(int n);
void even(int n);
void odd(int n)
{
    if (n <= 10)
    {
        cout << n + 1 << endl;
        n++;
        even(n);
    }
}
void even(int n)
{
    if (n <= 10)
    {
        cout << n - 1 << endl;
        n++;
        odd(n);
    }
}
int main()
{
    odd(1);
    return 0;
}