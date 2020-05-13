#include "container.h"

Container::Container()
 {
    _v=0;
 }
Container::Container(int _v)
{
    this->_v=_v;
}
int& Container::value()
{
	return _v;
}
void* Container::operator new(size_t val)
{
    if (mem_ptr==0 && mem_size==0)
	{
		mem_ptr = (Container*)malloc(sizeof(Container)*MEM_MAX);
		mem_size++;
        mem_ptr->_v=val;
		mem_ptr++;
        for(int i=1;i<MEM_MAX;i++)
        {
        mem_size++;
        mem_ptr->value()=0;
		mem_ptr++;
        }
		std::cout << "Pierwszy obiekt na stercie - alokuje kontener na 100 elementow\n";
	}
    else if(mem_size<MEM_MAX)
    {
        mem_ptr->_v=val;
        mem_ptr++;
        mem_size++;

    }
    else
    {
        std::string a="pełny";
        throw a;
    }
    return mem_ptr;

}
void Container::operator delete(void*, size_t size)
{
    mem_ptr-=size;
    if(size==mem_size)
    delete mem_ptr;
}
void* operator new[](size_t size)
{
    if (mem_ptr==0 && mem_size==0)
	{
		mem_ptr = (Container*)malloc(sizeof(Container)*MEM_MAX);
		for(int i=0;i<MEM_MAX;i++)
        {
        mem_size++;
        mem_ptr->value()=0;
		mem_ptr++;
        }
		std::cout << "Pierwszy obiekt na stercie - alokuje kontener na 100 elementow\n";
	}
    else if(mem_size+size<MEM_MAX)
    {
        mem_size+=size;
		mem_ptr+=size;
    }
    return mem_ptr;
}

