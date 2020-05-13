#pragma once 

#include <string>
#include <iostream>

class MyItem
{
public:
    MyItem(const std::string & name);
    
    MyItem(const MyItem&) = default;
    MyItem(MyItem&&) = default;
    
    virtual ~MyItem();

    virtual MyItem * clone() const = 0;

    virtual void ls(unsigned int op = 0) const = 0;
    
    void rename(const std::string & name);

protected:
    void printName(unsigned int op = 0, char c = '\0') const;
    
private:
    std::string m_name;
};

