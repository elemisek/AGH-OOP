#pragma once

#include <ostream>

class MyItem;
using T = MyItem;
using TP=T*;

//klasa reprezentująca unique pointer
class MyUnique
{
    TP raw;
    
public:
    MyUnique(): raw(nullptr) {}
    MyUnique(const TP raw): raw(raw) {}
    MyUnique(const MyUnique& ptr) = delete;
    MyUnique(MyUnique&& ptr) : raw(std::move(ptr.raw)) {ptr.raw = nullptr;}
    
    MyUnique& operator=(const MyUnique& ptr) = delete;
    MyUnique& operator=(MyUnique&& ptr)
    {
        // sprawdza czy obiekt nie próbuje zrobić move na samym sobie
        if (this != &ptr)
        {
            delete raw;
            raw = std::move(ptr.raw);
            ptr.raw = nullptr;
        }
        return *this;
    }
    
    ~MyUnique() {delete raw;}
    
    TP get() const { return raw; }
    T& operator*() const { return *raw; }
    TP operator->() const { return raw; }
};