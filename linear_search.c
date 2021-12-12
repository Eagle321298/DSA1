///////****** Linear_search- this method is not useful to find same repeated element
// #include <stdio.h>
// int search(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {24, 45, 22, 76, 45, 87, 9, 55, 1, 54, 33, 22}, size = sizeof(arr) / sizeof(arr[0]), element = 22;
//     int result= search(arr, size, element);
//     printf("%d is found at index %d",element,result);
//     return 0;
// }

/////////this  is too useful
// #include <stdio.h>
// int search(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             printf("%d is found at %d\n", element, i);
//         }
//     }
// }
// int main()
// {
//     int arr[] = {24, 45, 22, 76, 45, 87, 9, 55, 1, 54, 33, 22}, size = sizeof(arr) / sizeof(arr[0]), element = 22;
//     search(arr, size, element);

//     return 0;
// }
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define size 100
float stack[size];
int top = -1;

void push(float value)
{
    top++;
    stack[top] = value;
}

float pop()
{
    float item;
    item = stack[top];
    top--;
    return (item);
}
int operand(char symbol)
{
    if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
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
    char postfix[size], symbol;
    int i, op1, op2, result, x;
    printf("\n Enter postfix Expression");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        symbol = postfix[i];
        if (operand(symbol) == 1)

        {
            printf("Enter the value of %c", symbol);
            scanf("%d", &x);
            push(x);
        }
        else
        {
            op1 = pop();
            op2 = pop();
            switch (symbol)
            {
            case '+':
                result = op1 + op2;
                push(result);
                break;

            case '*':
                result = op1 * op2;
                push(result);
                break;

            case '/':
                result = op1 / op2;
                push(result);
                break;

            case '-':
                result = op1 - op2;
                push(result);
                break;
            }
        }
    }

    result = pop();
    printf("\n The result is %d", result);

    return 0;
}