#include "Mean.h"

std::ostream& operator<<(std::ostream& os, const Mean& other)
{
    return os << other.name();
}

void Mean::reset()
{
    sum = 0;
    counter = 0;
}

std::string Mean::name() const
{
    return mname;
}