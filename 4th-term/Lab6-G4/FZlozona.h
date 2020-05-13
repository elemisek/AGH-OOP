#pragma once
#include "Fun.h"

class FZlozona : public Fun
{
public:
    // Simple constructor
    FZlozona(Fun * fnc1, Fun * fnc2);

    virtual ~FZlozona();
    
    // Calculate for given argument
    double wartosc(double arg) const override;
    
    // Overridden clone function
    virtual FZlozona* clone() const override;
    
private:
    Fun * mfnc1 = nullptr;
    Fun * mfnc2 = nullptr;
};
