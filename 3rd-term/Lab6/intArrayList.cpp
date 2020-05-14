#include "intArrayList.h"
IntArrayList::IntArrayList()
{
	MaxSize=100;
	size=0;
	this->MaxSize=MaxSize;
	tab=new int [this->MaxSize];
}
IntArrayList::IntArrayList(int MaxSize=100)
{
	size=0;
	this->MaxSize=MaxSize;
	tab=new int [this->MaxSize];
}
IntArrayList::~IntArrayList()
{
	size=0;
	delete [] tab;
}
void IntArrayList::print()
{
	if(size==0)
	return;
	cout<<"["<< tab[0];
	for(int i=1; i<size; i++)
	{
		cout<< ", " << tab[i];
	}
	cout<<"]" << endl;
}
int IntArrayList::find(int val)
{
	for(int i=0; i<size; i++)
	{
		if(tab[i]==val)
			return i;
	}
	cout << "Wartosc=" << val << " Element nieznaleziony" << endl;
	return  -1;
}
void IntArrayList::printFind(int val)
{
    cout<<find(val);
}
void IntArrayList::add(int val)
{
	size++;
	if(size==this->MaxSize)
	{
		cout << "Brak miejsca" << endl;
		return;
	}
	tab[size-1]=val;
}
void IntArrayList::add(int *tab2, int numOfElements)
{
	if(size+numOfElements>=MaxSize)
	{
		return;
		cout << "Brak miejsca" << endl;
	}
		for(int i=0; i<numOfElements; i++)
		{
			tab[i+size]=tab2[i];
		}
		size+=numOfElements;
}
void IntArrayList::add(int index, int val)
{
	if(index>size||index>MaxSize||size>=MaxSize)
		cout<<"Blad wpisywania" << endl;
	else
	{
		for(int i=size; i>index; i--)
		{
			tab[i]=tab[i-1];
		}
		tab[index]=val;
		size++;
	}
}
void IntArrayList::add(int val, bool condition)
{
	if(!condition)
	add(val);
    if(size<MaxSize)
		cout<<"Blad wpisywania" << endl;
	else
	{
		for(int i=0; i<size; i++)
		{
			if(val<tab[i])
			{
				add(i-1, val);
				return;
			}
		}
	}
}
void IntArrayList::remove(int val)
{
	for(int i=0;i<size;i++)
	{
		if(tab[i]==val)
		{
			for(;i<size;i++)
			{
				tab[i]=tab[i+1];
			}
			size--;
			return;
		}
	}
}
void IntArrayList::remove(int val, int range)
{
	int index;
	for(int i=0;i<size;i++)
	{
		if(tab[i]==val)
		{
			index=i;
			for(;range>0;range--)
			{
				for(i=index;i<size-range;i++)
				{
					tab[i+range-1]=tab[i+range];
				}
				size--;
			}

			return;
		}
	}
}
