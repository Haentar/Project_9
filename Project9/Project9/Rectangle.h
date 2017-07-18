#pragma once
#include "Parallelogram.h"
class Rectangle :
	public Parallelogram
{
public:
	Rectangle(Point q1, int len, int hei);
	~Rectangle();
};

