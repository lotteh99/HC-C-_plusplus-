
#include <iostream>
using namespace std;

#include"실습문제1번해더.h"

Tower::Tower()
{
	radius = 1;
}

Tower::Tower(int r)
{
	 radius=r;
}

int Tower::getheight()
{
	return radius;
}