#include<iostream>
using namespace std;

class Circle //클래스 객체 생성
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
	Circle donut;// Circle 클래스 객체 생성 객체 이름은 donut
	donut.radius = 1; // donut 객체의 반지름을 1로 설정 / dunut의 멤버 변수 접근
	double area = donut.getArea(); //donut 객체의 면적 알아내기 / donut의 멤버 함수 호출
	cout << "donut의 면적은" << area << endl;

	Circle pizza; // Circle 클래스 객체 생성 객체 이름은 pizza
	pizza.radius = 30; //pizza의 객체의 반지름은 30으로 설정
	area = pizza.getArea();
	cout << "pizza의 면적은" << area << endl;
}

