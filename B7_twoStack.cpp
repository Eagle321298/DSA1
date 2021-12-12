////implementing two stacks by using single array
#include <iostream>
#include <stdlib.h>
using namespace std;

class twostacks
{
	int size;
	int *arr;
	int top1, top2;

public:
	twostacks(int n)
	{
		size = n;
		top1 = -1;
		top2 = size;
		arr = new int[n];
	}
	void push1(int data)
	{
		if (top1 < top2 - 1)
		{
			top1++;
			arr[top1] = data;
		}
		else
		{
			cout << "Stack is overflow\n";
		}
	}
	void push2(int data)
	{
		if (top1 < top2 - 1)
		{
			top2--;
			arr[top2] = data;
		}
		else
		{
			cout << "Stack is overflow\n";
		}
	}
	void pop1()
	{
		if (top1 > -1)
		{
			cout << "pop element of stack1 is " << arr[top1] << endl;
			top1--;
		}
		else
		{
			cout << "Stack is underflow\n";
		}
	}
	void pop2()
	{
		if (top2 < size)
		{
			cout << "pop element of stack2 is " << arr[top2] << endl;
			top2++;
		}
		else
		{
			cout << "Stack is underflow\n";
		}
	}
};

int main()
{
	twostacks s(8);

	// s.push1(10);
	// s.push1(20);
	// s.push2(90);
	// s.push2(80);
	// s.push1(30);
	// s.push1(40);
	// s.push1(50);
	// s.push1(60);
	// s.push1(70);
	// s.pop1();
	// s.pop2();

	// ////to segregate input data by odd-even no.//
	while (1)
	{
		cout << "1.push\n";
		cout << "2.pop\n";
		int choice;
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the data:";
			int num;
			cin >> num;
			if (num % 2 == 0)
			{
				s.push1(num);
			}
			else
			{
				s.push2(num);
			}

			break;
		case 2:
			s.pop1();
			s.pop2();
		default:
			exit(0);
			break;
		}
	}

	return 0;
}