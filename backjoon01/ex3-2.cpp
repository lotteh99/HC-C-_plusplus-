#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width; //
	int height;
	int getArea();  //������ ����ϴ� �����Լ�
};

int Rectangle::getArea() //�簢���� ���̸� ���ϴ� ������
{
	return width * height;
}


int main()
{
	Rectangle rect; // Rectangle ��ü���� ��ü�̸� rect
	rect.width = 3; // rect�� �ʺ� 3
	rect.height = 5;
	cout << "�簢���� ������" << rect.getArea() << endl;
}