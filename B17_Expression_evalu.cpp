#include <bits/stdc++.h>
using namespace std;
int value(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        break;
    }

}

int precedence(char a)
{
    if (a == '*' || a == '/')
    {
        return 3;
    }
    else if (a == '+' || a == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int evaluate(string exp)
{
    stack<int> val;
    stack<char> op;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == ' ')
        {
            continue;
        }
        else if (exp[i] == '(')
        {
            op.push(exp[i]);
        }
        else if (isdigit(exp[i]))
        {
            int data = 0;
            while (i < exp.length() && isdigit(exp[i]))
            {
                data = (data * 10) + (exp[i] - '0');
                i++;
            }
            val.push(data);
            i--; // since for loop also increased value of i;
        }
        else if (exp[i] == ')')
        {
            while (!op.empty() && op.top() != '(')
            {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char oper = op.top();
                op.pop();
                val.push(value(val1, val2, oper));
            }
            if (!op.empty())
            {
                op.pop();
            }
            
        }
        else
        {
            while (!op.empty() && precedence(exp[i]) <= precedence(op.top()))
            {
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                char oper = op.top();
                op.pop();
                val.push(value(val1, val2, oper));
            }
            op.push(exp[i]);
        }
    }
    while (!op.empty())
    {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char oper = op.top();
        op.pop();
        val.push(value(val1, val2, oper));
    }
    return val.top();
}
int main()
{
    cout << evaluate("10 + 2");

    return 0;
}

