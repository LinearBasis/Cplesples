#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point( float x = 0, float y = 0 );
	Point( const Fixed& x, const Fixed& y );
	~Point();
	Point( const Point& point );

	float	det(const Point& point) const;
	Point&	operator=( const Point& point );
	Point	operator-(const Point& point) const;
};

bool	is_point_in_triangle(const Point& a, const Point& b,
			const Point& c, const Point& point);

bool bsp( Point const a, Point const b,
			Point const c, Point const point );