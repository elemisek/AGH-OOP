#include "functionVector.h"
double FunctionVector::calc(double x)
{
	wyniki.clear();
	for(int i=0;i<wektor.size();i++)
	{
		x=wektor[i](x);
		wyniki.push_back(x);
	}
	return x;
}
void FunctionVector::insert(std::function<double(double)> fun)
{
	wektor.push_back(fun);
}
double FunctionVector::operator [](const int a)
{
	return wyniki[a];
}