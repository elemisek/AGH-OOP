#include "Loudy.h"

Loudy::Loudy(std::string name) : mName(std::move(name)) 
{ 
    std::cout << "Laudy "<< mName << " is waking up!" << std::endl;
}

Loudy::~Loudy() 
{ 
    std::cout << "Laudy "<< mName <<" is going to sleep..." << std::endl; 
}

void Loudy::skip() const 
{ 
    throw std::exception(); 
}

LoudyArray::LoudyArray(size_t size) : mSize(size) 
{ 
    mPtr=new Loudy*[size];
    
    for(size_t i = 0; i < size; ++i)
        mPtr[i] = nullptr;
}

LoudyArray::~LoudyArray()
    {
        for(size_t i=0;i<mSize;i++)
        {
            delete mPtr[i];
        }
        delete [] mPtr;
    }
void LoudyArray::set(size_t ind, Loudy * elem)
    {
        if(ind >= mSize || ind < 0)
        {
            delete elem;
            throw BerserkerException(this);
        }   
        
        if(mPtr[ind])
            delete mPtr[ind];
            
        mPtr[ind] = elem;
    }