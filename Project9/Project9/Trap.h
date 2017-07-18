#pragma once
#include "Quadrilateral.h"
class Trap : Quadrilateral
{
public:
	Trap(Point q1, Point q2, int len1, int len2);
	~Trap();
protected:
	int len1;
	int len2;
};

