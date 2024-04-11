#include <iostream>
using namespace std;

class Rectangle
{
public:
	int width; //
	int height;
	int getArea();  //면적을 계산하는 리턴함수
};

int Rectangle::getArea() //사각형의 넓이를 구하는 구현부
{
	return width * height;
}


int main()
{
	Rectangle rect; // Rectangle 객체생성 객체이름 rect
	rect.width = 3; // rect의 너비를 3
	rect.height = 5;
	cout << "사각형의 면적은" << rect.getArea() << endl;
}