#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int c = a * (b % 10); // b �Է°��� 1�� �ڸ�
	int d = a * ((b % 100) / 10); // b �Է°��� 10�� �ڸ��� ���ϴ°�
	int e = a * (b/ 100);

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << a*b << endl;
}