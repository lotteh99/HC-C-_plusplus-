#include<iostream>
using namespace std;

#include "실습문제1번해더.h"

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << myTower.getheight() << "높이" << endl;
	cout << seoulTower.getheight() << "높이" << endl;
}