#include "ArithmeticMean.h"
#include <iostream>

ArithmeticMean& ArithmeticMean::operator<<(double val)
{
    sum += val;
    counter++;
    return *this;
}

double ArithmeticMean::result() const
{
    if(counter)
        return sum/counter;
    return 0;    
}

const ArithmeticMean& operator<<(const ArithmeticMean& other, double a)
{
    std::cout << "ERROR: cannot add value " << a << " to const " << other.name() << " Mean" << std::endl;
    return other;
}