#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
public:
	Complex();
	Complex(double Re, double Im);
	virtual ~Complex();
	Complex operator++(int);
	Complex operator++();
	Complex operator+(Complex a);
private:
	double Re;
	double Im;
};

#endif // COMPLEX_H
