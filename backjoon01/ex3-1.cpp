#include<iostream>
using namespace std;

class Circle //Ŭ���� ��ü ����
{
public:
	int radius;
	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut;// Circle Ŭ���� ��ü ���� ��ü �̸��� donut
	donut.radius = 1; // donut ��ü�� �������� 1�� ���� / dunut�� ��� ���� ����
	double area = donut.getArea(); //donut ��ü�� ���� �˾Ƴ��� / donut�� ��� �Լ� ȣ��
	cout << "donut�� ������" << area << endl;

	Circle pizza; // Circle Ŭ���� ��ü ���� ��ü �̸��� pizza
	pizza.radius = 30; //pizza�� ��ü�� �������� 30���� ����
	area = pizza.getArea();
	cout << "pizza�� ������" << area << endl;
}

