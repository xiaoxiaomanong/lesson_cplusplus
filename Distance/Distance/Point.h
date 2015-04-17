#pragma once
template <typename T>
class Point
{
public:
	Point() : x(0), y(0) {}
	Point(T x, T y) : x(x), y(y) {}
	Point(const Point &src);
	Point & operator=(const Point &src);
	~Point(void) {}

	friend double distance(const Point &p1, const Point &p2);
private:
	T x;
	T y;
};

double distance(const Point<int> &p1, const Point<int> &p2);

