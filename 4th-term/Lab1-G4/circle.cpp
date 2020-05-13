#include "circle.h"
Circle::Circle()
{
	r = 0;
}
Circle::Circle(double r)
{
	this->r = r;
}
void Circle::print() const
{
	std::cout << "Kolo o promieniu: " << r <<  std::endl;
}
double Circle::area() const
{
	return 3.1415*r*r;
}