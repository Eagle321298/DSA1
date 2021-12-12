#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    string ch;
    for (int i = 0; i < str.length(); i++)
    {
        ch += s.top();
        s.pop();
    }
    if (ch == str)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string str = "sir";
    if (isPalindrome(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}