#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c && a == c) //�� �ڸ����� ��� ���� ��
	{
		cout << (a * 1000) + 10000;
	}
	else
	{
		if (a == b) // �� �ڸ����� ���� ��
		{
			cout << (a * 100) + 1000;

		}
		else if (b == c)
		{
			cout << (b * 100) + 1000;
		}
		else if (a == c)
		{
			cout << (c * 100) + 1000;
		}
		else
		{
			if (a > b)
				cout << a * 100;
			else if (b > c)
				cout << b * 100;
			else if (c > a)
				cout << c * 100;
		}
	}
}