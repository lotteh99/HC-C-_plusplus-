
#include <iostream>
using namespace std;

#include"�ǽ�����1���ش�.h"

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