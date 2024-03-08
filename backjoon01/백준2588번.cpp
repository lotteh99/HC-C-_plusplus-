#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int c = a * (b % 10); // b 입력값의 1의 자리
	int d = a * ((b % 100) / 10); // b 입력값의 10의 자리만 구하는것
	int e = a * (b/ 100);

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << a*b << endl;
}