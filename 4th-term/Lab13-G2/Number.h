#pragma once
class Number
{
private:
	static int mX1, mX2;
	double mValue;
public:
	static void setRange(int, int);
	Number(double);
	Number& value();
	void operator=(double);
	double value() const;
	void print() const;

};

