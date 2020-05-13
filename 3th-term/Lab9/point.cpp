#include "point.h"
Point::Point()
{
	x = 0;
	y = 0;
	name = "";
}
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
	this->name="Miejsce nieznane";
}
Point::Point(std::string name, double x, double y)
{
	this->x = x;
	this->y = y;
	this->name = name;
}
Point::Point(Point& p) //kopiuje element
{
	x = p.x;
	y = p.y;
	name = p.name;
}
/*Point::Point(Point &&p)
	: name(std::exchange(p.name,""))
{}*/
/*Point::Point(Point&& o) : name(o.name)
{
	o.name = nullptr;
}*/
Point::Point(Point&& o) = default;
Point::~Point()
{
}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
std::string Point::getName()
{
	return name;
}
void Point::changeName(std::string name)
{
	this->name = name;
}
void Point::fullPrint()
{
	if (x && y && name.size()!=0)
	{
		std::cout << name << "(" << x << "," << y << ")\n";
	}
	else
	{
		std::cout << "NULL (0,0)\n";
	}
}
void Point::move(int x, int y)
{
	this->x += x;
	this->y += y;
}
int compareX(Point &p1, Point &p2)
{
	if(p1.getX()<p2.getX())
	return 1;
	else if(p1.getX()>p2.getX())
	return -1;
	else
	return 0;
}
int compareY(Point &p1, Point &p2)
{
	if(p1.getY()<p2.getY())
	return 1;
	else if(p1.getY()>p2.getY())
	return -1;
	else
	return 0;
}
int compareXY(Point &p1, Point &p2)
{
	return 10*compareX(p1,p2)+compareY(p1,p2);
}
void directions(Point &p1, Point &p2, std::string s)
{
	int X,Y,XY;
	std::cout << p1.getName()<< " jest na ";
	if(s=="compareX")
	{
		X=compareX(p1,p2);
		if(X==1)
			std::cout << "zachód od ";
		if(X==-1)
			std::cout << "wschód od ";
		if(X==0)
			std::cout << "tej samej długości co ";
		

	}
	else if(s=="compareY")
	{
		Y=compareY(p1,p2);
		if(Y==1)
			std::cout << "południe od ";
		if(Y==-1)
			std::cout << "północ od ";
		if(Y==0)
			std::cout << "tej samej długości co ";
		

	}
	else if(s=="compareXY")
	{
		XY=compareXY(p1,p2);
		if(XY==-11)
			std::cout << "północny-wschód od ";
		if(XY==-10)
			std::cout << "wschód od ";
		if(XY==-9)
			std::cout << "południowy-wschód od ";
		if(Y==-1)
			std::cout << "północ od ";
		if(XY==0)
			std::cout << "w tym samym miejscu co ";
		if(XY==1)
			std::cout << "południe od ";
		if(XY==9)
			std::cout << "północny-zachód od ";
		if(XY==10)
			std::cout << "zachód od ";
		if(XY==11)
			std::cout << "południowy-zachód od ";
		
	}
	std::cout  << p2.getName() << std::endl;
}
