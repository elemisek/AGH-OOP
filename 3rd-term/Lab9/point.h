#pragma once
#include <iostream>
#include <string.h>
class Point
{
private:
	std::string name;
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	Point(std::string name, double x, double y);
	Point(Point& p);
	Point(Point&& o);
	~Point();
	double getX();
	double getY();
	std::string getName();
	void changeName(std::string name);
	void fullPrint();
	void move(int x, int y);
};
int compareX(Point &p1, Point &p2);
int compareY(Point &p1, Point &p2);
int compareXY(Point &p1, Point &p2);
void directions(Point &p1, Point &p2, std::string s);
