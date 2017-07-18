#pragma once
#include "Point.h"
class Quadrilateral
{
public:
	Quadrilateral();
	Quadrilateral(Point,Point,Point,Point);
	~Quadrilateral();
	void print();
protected:
	Point p1;
	Point p2;
	Point p3;
	Point p4;
};

