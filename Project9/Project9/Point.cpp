#include "Point.h"


Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int inpx, int inpy)
{
	x = inpx;
	y = inpy;
}

void Point::setX(int xpos) { x = xpos; }

void Point::setY(int ypos) { y = ypos; }

int Point::getX() { return x; }

int Point::getY() { return y; }

Point::~Point()
{
}
