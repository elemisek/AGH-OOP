#include "HarmonicMean.h"

HarmonicMean& HarmonicMean::operator<<(double val)
{
    sum+=1./val;
    counter++;
    return *this;
}

double HarmonicMean::result() const
{
    if(counter)
        return counter / sum;
    return 0;
}

HarmonicMean* HarmonicMean::create()
{
    return new HarmonicMean;
}

const HarmonicMean& operator<<(const HarmonicMean& other, double a)
{
    std::cout << "ERROR: cannot add value " << a << " to const " << other.name() << " Mean" << std::endl;
    return other;
}