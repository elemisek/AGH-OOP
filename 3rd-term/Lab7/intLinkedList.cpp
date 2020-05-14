#include "intLinkedList.h"
#include <iostream>
using namespace std;
IntLinkedList::IntLinkedList()
{
	this->head=nullptr;
	this->tail=nullptr;
}
IntLinkedList::~IntLinkedList()
{
	head=nullptr;
	tail=nullptr;
}
int IntLinkedList::size()
{
	Element *currentElement=head;
	int listSize=0;
	while(currentElement!=nullptr)
	{
		currentElement=currentElement->wsk;
        listSize++;
	}
	return listSize;
}
bool IntLinkedList::isEmpty()
{
	if(head==nullptr)
		return true;
	else
		return false;
}
void IntLinkedList::print()
{
	if(isEmpty()) //pusta
	return;
	cout<<"["<<head->value;
	Element *currentElement=(head->wsk);
	while(currentElement!=nullptr)
	{
		cout<<", "<<currentElement->value;
		currentElement=currentElement->wsk;
	}
	cout<<"]"<<endl;
}
void IntLinkedList::prepend(int val)
{
	if(isEmpty()) //pusta
	{

		Element tempElement;
		tempElement.value=val;
		tempElement.wsk=nullptr;
		head=&tempElement;
	}
	else //niepusta
	{
		Element tempElement;
		tempElement.value=val;
		tempElement.wsk=head;
		head=&tempElement;
	}
}
void IntLinkedList::addSorted(int val)
{
    Element *currentElement=head;
    Element tempElement;
    while(currentElement!=nullptr)
	{
		if(currentElement->wsk->value>val)
		{
			tempElement.value=val;
			tempElement.wsk=currentElement->wsk;
			currentElement=&tempElement;
			return;
		}
	}
}
void IntLinkedList::removeLast()
{
	if(isEmpty()) //pusta
	return;
	Element *currentElement=head;
	while(true)
	{
		if(currentElement->wsk->wsk==nullptr)
		{
			currentElement->wsk=nullptr;
			tail=currentElement;
			return;
		}
		currentElement=currentElement->wsk;
	}
	
}
void IntLinkedList::removeValue(int val)
{
	Element *currentElement=head;
    while(currentElement!=nullptr)
	{
		if(currentElement->wsk->value==val)
		{
			currentElement->wsk=currentElement->wsk->wsk;
		}
	}
}
bool IntLinkedList::contains(int val)
{
	Element *currentElement=head;
    while(currentElement!=nullptr)
	{
		if(currentElement->value==val)
			return true;
		currentElement=currentElement->wsk;
	}
	return false;
}
