#pragma once
class Point
{
public:
	Point();
	Point(int x,int y);
	~Point();
	//setters
	void setX(int);
	void setY(int);
	//getters
	int getX();
	int getY();
private:
	int x;
	int y;
};

