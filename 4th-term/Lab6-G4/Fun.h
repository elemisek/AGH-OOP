#pragma once

class Fun
 // Abstract class - interface
{
public:
    virtual ~Fun(){}
    
    // Return calculated function value
    virtual double wartosc(double arg) const = 0;
    
    // Return pointer to copy of itself
    virtual Fun* clone() const = 0;
};
