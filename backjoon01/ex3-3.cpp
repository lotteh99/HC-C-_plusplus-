#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();// �⺻������
	Circle(int r);// �Ű� ���� �ִ� ������
	double getArea();
};


Circle::Circle()
{
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}


int main()
{
	Circle donut;// Circle Ŭ���� ��ü ���� ��ü �̸��� donut
	double area = donut.getArea(); //donut ��ü�� ���� �˾Ƴ��� / donut�� ��� �Լ� ȣ��
	cout << "donut�� ������" << area << endl;

	Circle pizza(30); // Circle Ŭ���� ��ü ���� ��ü �̸��� pizza
	area = pizza.getArea();
	cout << "pizza�� ������" << area << endl;
}