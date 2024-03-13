#include<iostream>
using namespace std;

int main()
{
	int a;
	a = 0;
	if (a <= 9)
	{
		cin >> a;
		for (int i = 1; i <= 9; i++)
		{
			cout << a << " * " << i << " = " << i * a << endl;
		}
	}

}