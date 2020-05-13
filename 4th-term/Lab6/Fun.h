#pragma once

class Fun
 // Abstract class - interface
{
public:
    virtual ~Fun(){}
    
    // Return calculated function value. Needs to be overridden in each derived class
    virtual double wartosc(double arg) const = 0;
    
    // Return pointer to copy of itself. Needs to be overridden in each derived class
    virtual Fun* clone() const = 0;
};
