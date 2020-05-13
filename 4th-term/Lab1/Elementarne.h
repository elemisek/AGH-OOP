#pragma once

#include "Fun.h"
class Liniowa : public Fun
{
public:
    Liniowa()=default;
    virtual ~Liniowa(){}
    
    // Set a and b parameters
    Liniowa * a(double a);
    Liniowa * b(double b);
    
    //Static function returning pointer to created object
    static Liniowa * utworz();
    
    // Calculate for given argument
    double wartosc(double arg) const override;
    
    // Overridden clone function
    Liniowa * clone() const override;
    
private:
    double ma, mb;

};

class Kwadratowa : public Fun
{
public:
    Kwadratowa()=default;
    virtual ~Kwadratowa(){}
    
    // Set a, b and c parameters
    Kwadratowa * a(double a);
    Kwadratowa * b(double b);
    Kwadratowa * c(double c);
    
    //Static function returning pointer to created object
    static Kwadratowa * utworz();
    
    // Calculate for given argument
    double wartosc(double arg) const override;
    
    // Overridden clone function
    Kwadratowa * clone() const override;
    
private:
    double ma, mb, mc;
};

class Sinus : public Fun
{
public:
    Sinus()=default;
    ~Sinus(){}
    
    // Calculate for given argument
    double wartosc(double arg) const override;
    
    // Overridden clone function
    Sinus * clone() const override;
};
