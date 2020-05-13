#include "FZlozona.h"
#include "Fun.h"
FZlozona::FZlozona(Fun * fnc1, Fun * fnc2) : mfnc1(fnc1->clone()), mfnc2(fnc2->clone()){}
double FZlozona::wartosc(double arg) const
{
    return mfnc2->wartosc(mfnc1->wartosc(arg));
}

FZlozona * FZlozona::clone() const
{
    return new FZlozona(*this);
}

FZlozona::~FZlozona()
{
    if(mfnc1)
        delete mfnc1;
        
    if(mfnc2)
        delete mfnc2;
}
