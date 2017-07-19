#include "Quadrilateral.h"
#include <iostream>
using namespace std;


Quadrilateral::Quadrilateral()
{
	Point p1(0,0);
	Point p2(0,0);
	Point p3(0,0);
	Point p4(0,0);
}
Quadrilateral::Quadrilateral(Point A, Point B, Point C, Point D)
{
	Point p1 = A;
	Point p2 = B;
	Point p3 = C;
	Point p4 = D;
}

 void Quadrilateral::print() {
	cout << "Point 1 is at " << p1.getX() << "," << p1.getY() << endl;
	cout << "Point 2 is at " << p2.getX() << "," << p1.getY() << endl;
	cout << "Point 3 is at " << p3.getX() << "," << p1.getY() << endl;
	cout << "Point 4 is at " << p4.getX() << "," << p1.getY() << endl;
}


Quadrilateral::~Quadrilateral()
{
}
