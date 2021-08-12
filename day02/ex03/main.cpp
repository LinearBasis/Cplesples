#include <iostream>
#include "Point.hpp"



int main( void )
{
	Point	a1(20.0f, 3.0f);
	Point	a2(0.0f, 0.0f);
	Point	a3(0.0f, 20.0f);

	for (float i = 0; i < 22; i+=1)
	{
		for (float j = 0; j < 22; j += 1)
		{
			Point point(i, j);
			if (bsp(a1, a2, a3, point))
				std::cout << "0";
			else
				std::cout << "_";
		}
		std::cout << std::endl;
	}
}