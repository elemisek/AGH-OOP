#pragma once

class Function
{
public:
	Function() = default;
	virtual ~Function() = default;
	virtual Function * clone() const = 0;
	virtual double calc(double) const = 0;

private:
	double parameter;
};



class Sin : public Function
{
public:
	Sin();
	Sin(double);
	~Sin() = default;

	Function * clone() const override;
	void set_parameter(double);
	double calc(double) const override;

private:
	double parameter;
};



class Quadratic : public Function
{
public:
	Quadratic();
	Quadratic(double, double, double);
	~Quadratic() = default;

	Function * clone() const override;
	double calc(double) const override;

private:
	double a, b, c;
};



class Derivative : public Function
{
public:
	Derivative(Function * fnc);
	~Derivative();

	Function * clone() const override;
	void set_dx(double);
	double calc(double) const override;

private:
	double dx;
	Function * mfnc=nullptr;
};







