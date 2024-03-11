#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a >= 1 && a <= 4000)
	{
		if (a % 4 == 0)//4의 배수 
		{
			if (a % 100 != 0 || a % 400 == 0)
			{
				cout << 1;
			}
			else
				cout << 0;
		}
		else
			cout << 0;
	}
	else
	cout << "1보다 크거나 4000보다 작은수 입력";
}