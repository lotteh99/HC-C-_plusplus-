#include <iostream>
using namespace std;

class Tower
{
	int radius; // �ܺ����� ����
public:
	Tower(); //�⺻������ ���� myTower
	Tower(int r); //�ŰԺ����� �ִ� ������ seoulTower(100)
	int getheight();
};

Tower::Tower()
{
	radius=1;
}

Tower::Tower(int r) //seoulTower(100) r=100
{
	radius = r;
}

int Tower::getheight()//radius ���� �����ִ� �Լ�
{
	return radius;
}

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getheight() << "����" << endl;
	cout << "���̴�" << seoulTower.getheight() << "����" << endl;
}