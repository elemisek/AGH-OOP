#include "Complex.h"

Complex::Complex()
{
	this->Re = 0;
	this->Im = 0;
}
Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

Complex::~Complex()
{

}
Complex Complex::operator++()
{
	return Complex(++this->Re, ++this->Im);
}
Complex Complex::operator++(int)
{
	return Complex(this->Re++, this->Im++);
}
Complex Complex::operator+(Complex a)
{
	Complex temp;
	temp.Re = this->Re + a.Re;
	temp.Im = this->Im + a.Im;
	return temp;


}
