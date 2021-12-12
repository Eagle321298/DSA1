#include <iostream>
using namespace std;
void fun(int n, char fr, char to, char ax)
{
	if (n == 1)
	{
		cout << "move rode 1 from " << fr << " to " << to << endl;
		return;
	}
	fun(n - 1, fr, ax, to);
	cout << "move rode "<<n<<" from " << fr << " to " << to << endl;
	fun(n - 1, ax,to ,fr);
}
int main()
{
	fun(4, 'a','c','b');

	return 0;
}
