#include "Rectangle.h"



Rectangle::Rectangle(Point q1, int len, int hei):Parallelogram(q1,Point(q1.getX(),q1.getY()+hei),len)
{
}


Rectangle::~Rectangle()
{
}
