#include "Point.hpp"

bool	is_point_in_triangle(const Point& a, const Point& b,
			const Point& c, const Point& point)
{
	typedef Point Vector;

	Vector	ab = b - a;
	Vector	ac = c - a;

	Vector	ba = a - b;
	Vector	bc = c - b;

	Vector	ap = point - a;
	Vector	bp = point - b;	

	if (ab.det(ap) * ac.det(ap) >= 0)
		return (false);
	if (bc.det(bp) * ba.det(bp) >= 0)
		return (false);
	return (true);


}

bool bsp( Point const a, Point const b,
			Point const c, Point const point )
{
	return (is_point_in_triangle(a, b, c, point));
}