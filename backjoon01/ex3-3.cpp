#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();// 기본생성자
	Circle(int r);// 매게 변수 있는 생성자
	double getArea();
};


Circle::Circle()
{
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}


int main()
{
	Circle donut;// Circle 클래스 객체 생성 객체 이름은 donut
	double area = donut.getArea(); //donut 객체의 면적 알아내기 / donut의 멤버 함수 호출
	cout << "donut의 면적은" << area << endl;

	Circle pizza(30); // Circle 클래스 객체 생성 객체 이름은 pizza
	area = pizza.getArea();
	cout << "pizza의 면적은" << area << endl;
}