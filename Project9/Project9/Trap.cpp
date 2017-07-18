#include "Trap.h"



Trap::Trap(Point q1, Point q2, int len1, int len2): Quadrilateral(q1, q2, Point(q1.getX()+len1,q1.getY()), Point(q2.getX()+len2, q2.getY()))
{
	
}


Trap::~Trap()
{
}
