#include <iostream>
using namespace std;

class Tower
{
	int radius; // 외부접근 제한
public:
	Tower(); //기본생성자 만듬 myTower
	Tower(int r); //매게변수가 있는 생성자 seoulTower(100)
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

int Tower::getheight()//radius 값을 보여주는 함수
{
	return radius;
}

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는" << myTower.getheight() << "미터" << endl;
	cout << "높이는" << seoulTower.getheight() << "미터" << endl;
}