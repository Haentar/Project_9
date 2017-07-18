//Shapes Hierarchy - 9
//6 Classes: Point, Quadrilateral((4 points))[ Trapezoid[ Paralellogram[Rectangle[Square]]]]
//All shapes but the quadrilateral are parallel to the x-axis.
#include <iostream>
#include "Trap.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Quadrilateral.h"
#include "Point.h"
using namespace std;

int main() {
	//Asks the user to select a shape.
	//Requests the required data to make the shape.
char shapeChoice;
string yn="y";
int i1;
int i2;
int i3;
	while (yn == "y") {
		cout << "What shape would you like to create?" << endl;
		cout << "(p = parallelogram, q = quadrilateral, r = rectangle, s = square, or t = trapezoid)"<<endl;
	
	cin >> shapeChoice;
	switch (shapeChoice) {
	case 'p':
		cout << "Please include the two far left points, as well as the length from one to one on the right.\n";
		cout << "Point 1 x:\n";
		cin >> i1;
		cout << "Point 1 y:\n";
		cin >> i2;
		Point A(i1, i2);
		cout << "Point 2 x:\n";
		cin >> i1;
		cout << "Point 2 y:\n";
		cin >> i2;
		Point B(i1, i2);
		cout << "Length:\n";
		cin >> i1;

		Parallelogram Done(A, B, i1);
		Done.print();
		break;
	}
	system("pause");
	}
	return 0;
}