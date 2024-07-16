#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = y = 0;
}

void Point::set_point(int ix, int iy)
{
	x = ix;
	y = iy;
}

void Point::show()
{
	cout << "----------------------------\n\n";
	cout << x << "\t" << y << "\n\n";
	cout << "----------------------------\n\n";
}
