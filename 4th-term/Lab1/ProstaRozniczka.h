#pragma once

class Fun;
class ProstaRozniczka
{
public:
    ProstaRozniczka(double dx) : dx(dx){}
    ~ProstaRozniczka() {};
    
    // Function returning pointer to itself
    ProstaRozniczka * z(Fun * fnc);
    
    //Function calculating derivative
    double w(double arg);
    
    // //Operators calculating derivative eventually using member functions z() and w()
    // ProstaRozniczka& operator()(Fun* fnc);
    // double operator()(double arg);
    
private:
    Fun* fnc=nullptr;
    double dx;
    
};
