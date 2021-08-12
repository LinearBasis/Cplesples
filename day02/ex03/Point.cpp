#include "Point.hpp"

Point::Point(float x, float y)
	: _x(x), _y(y)
{

}


Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y)
{

}

Point::~Point()
{

}


Point&	Point::operator=(const Point& point)
{
	std::cout << "Ti daun" << std::endl;
	(void)point;
	return (*this);
}

Point	Point::operator-(const Point& point) const
{
	return Point(this->_x - point._x, this->_y - point._y);
}

float	Point::det(const Point& point) const
{
	return ((this->_x * point._y -
				this->_y * point._x).toFloat());
}