#include <math.h>

#include "Point.h"

template <typename T>
Point<T>::Point(const Point<T> &src)
{
	this->x = src.x;
	this->y = src.y;
}

template <typename T>
Point<T> & Point<T>::operator=(const Point<T> &src)
{
	this->x = src.x;
	this->y = src.y;
	retur *this;
}

double distance(const Point<int> &p1, const Point<int> &p2)
{
	return sqrt(pow(static_cast<float>(p1.x-p2.x),2) + pow(static_cast<float>(p1.y-p2.y), 2));
}
