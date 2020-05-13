#include "MyDir.h"

MyDir * MyDir::clone() const
{
    return new MyDir(*this);
}

void MyDir::ls(unsigned int op) const
{
    //dodaj ukośnik dla folderów
    printName(op, '/');
    
    for(auto& elem : content)
        elem->ls(op+1);
}

void MyDir::operator/=(MyUnique&& item)
{
    content.push_back(std::move(item));
}
