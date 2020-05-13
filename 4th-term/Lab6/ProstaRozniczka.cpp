#include "ProstaRozniczka.h"
#include "Fun.h"
ProstaRozniczka * ProstaRozniczka::z(Fun * fnc)
{
    this->fnc=fnc;
    return this;
}

double ProstaRozniczka::w(double arg)
{
     return (fnc->wartosc(arg+dx)-fnc->wartosc(arg-dx))/(2*dx);
}

// ProstaRozniczka& ProstaRozniczka::operator()(Fun* fnc)
// {
//     return *z(fnc);
// }
    
// double ProstaRozniczka::operator()(double arg)
// {
//     return w(arg);
// }
