#include "Elementarne.h"
#include <cmath>

Liniowa * Liniowa::utworz()
{
    return new Liniowa;
}

Liniowa * Liniowa::a(double a)
{
    ma=a;
    return this;
}

Liniowa * Liniowa::b(double b)
{
    mb=b;
    return this;
}

double Liniowa::wartosc(double arg) const
{
    return ma*arg+mb;
}

Liniowa * Liniowa::clone() const
{
    return new Liniowa(*this);
}




Kwadratowa * Kwadratowa::utworz()
{
    return new Kwadratowa;
}
Kwadratowa * Kwadratowa::a(double a)
{
    ma=a;
    return this;
}
Kwadratowa * Kwadratowa::b(double b)
{
    mb=b;
    return this;
}
Kwadratowa * Kwadratowa::c(double c)
{
    mc=c;
    return this;
}
double Kwadratowa::wartosc(double arg) const
{
    return ma*arg*arg+mb*arg+mc;
}
Kwadratowa * Kwadratowa::clone() const
{
    return new Kwadratowa(*this);
}




double Sinus::wartosc(double arg) const
{
    return sin(arg);
}
Sinus * Sinus::clone() const
{
    return new Sinus(*this);
}
