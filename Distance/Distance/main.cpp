#include <iostream>

#include "Point.h"

int main(int argc, char* argv[])
{
	Point<int> p1(1, 1);
	Point<int> p2(2, 2);

	std::cout << distance(p1, p2) << std::endl;

	return 0;
}