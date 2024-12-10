#include "classes.cpp"
#include "decl.h"

#include <iostream>
#include <cmath>

int main()
{
	double x, y, distance = 10000;

	std::cin >> x >> y;

	Point obj1(x, y), obj2;

	while (x != 0 or y != 0)
	{
		double res_tmp = obj1.getDistance(obj1, obj2);
		std::cout << res_tmp << std::endl;

		if (res_tmp < distance) distance = res_tmp;

		std::cin >> x >> y;

		obj1.setX(x);
		obj1.setY(y);
	}

	std::cout << distance << std::endl;

	return 0;
}