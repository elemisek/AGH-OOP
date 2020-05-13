#pragma once
#include<cstring>
#include<iostream>
class Container;
static int mem_size;
const int MEM_MAX = 100;
static Container* mem_ptr;
class Container
{
public:
    Container();
    Container(int);
	int& value();
	void* operator new(size_t);
	void operator delete(void*, size_t);
	void* operator new[](size_t);
	void operator delete[](void*, size_t);
private:
	int _v;
};
