#include "intLinkedList.h"
IntLinkedList::IntLinkedList()
{
    name="LX";
}
IntLinkedList::IntLinkedList(std::string name)
{
    this->name=name;
}
Element::Element()
{
	ptr=nullptr;
}
Element::Element(int val)
{
	value=val;
	ptr=nullptr;
}
Element::Element(Element& e)
{
	value=e.value;
	ptr=e.ptr;
}
IntLinkedList::~IntLinkedList()
{
	while(head->ptr!=nullptr)
	{
		Element *temp=head->ptr;
		delete head;
		head=temp;
	}
	delete head;
	tail=nullptr;
	if(!isEmpty())
	{
		std::cout<<"Destruktor: Lista "<<name<<"pusta\n";
	}
}
Element::~Element()
{
	ptr=nullptr;
}
int IntLinkedList::size()
{
	int liize=0;
	Element *temp=head;
	while(temp!=nullptr)
	{
		temp=temp->ptr;
        liize++;
	}
	delete temp;
	return liize;
}
bool IntLinkedList::isEmpty()
{
	if(head==nullptr && tail==nullptr)
		return true;
	return false;
}
void IntLinkedList::print()
{
	if(isEmpty())
	{
		std::cout<<"[]\n";
		return;
	}

	std::cout<<"[ "<<head->value;
	if(head!=nullptr)
	{
		Element *temp=head->ptr;
		while(temp!=nullptr)
		{
			std::cout<<", "<<temp->value;
			temp=temp->ptr;
		}
	}
	std::cout<<" ]"<<std::endl;
}
void IntLinkedList::prepend(int val)
{
	if(isEmpty())
	{
		head=new Element(val);
		head->ptr=nullptr;
	}
	else if(size()==1)
	{
		tail=head;
		head=new Element;
		head->value=val;
		head->ptr=tail;
	}
	else
	{
		Element *temp=head;
		head=new Element;
		head->value=val;
		head->ptr=temp;
	}
}
void IntLinkedList::prepend(Element& e)
{
	if(head==nullptr)
	{
		head->value=e.value;
		head->ptr=nullptr;
	}
	else if(tail==nullptr)
	{
		tail=head;
		head->value=e.value;
		head->ptr=tail;
	}
	else
	{
		Element *temp=head;
		head=new Element;
		head->value=e.value;
		head->ptr=temp;
	}
}
void IntLinkedList::append(int val)
{
	if(isEmpty())
	{
		head->value=val;
		head->ptr=nullptr;
	}
	else
	{
		Element *temp=new Element(val);
		head->ptr=temp;
	}
}
void IntLinkedList::append(Element& e)
{
	if(isEmpty())
	{
		head->value=e.value;
		head->ptr=nullptr;
	}
	else
	{
		Element *temp=new Element(e.value);
		temp->ptr=nullptr;
		head->ptr=temp;
	}
}
void IntLinkedList::append(IntLinkedList li)
{
	Element * temp=li.head;
	while(temp!=nullptr)
	{
		append(temp->value);
		temp=temp->ptr;
	}
}
Element* IntLinkedList::contains(int val)
{
	Element *temp=head;
    while(temp!=nullptr)
	{
		if(temp->value==val)
		{
			return temp;
		}
		temp=temp->ptr;
	}
	return nullptr;
}
void IntLinkedList::removeLast()
{
	if(isEmpty())
	{
		return;
	}
	else if(head->ptr==nullptr)
	{
		head=nullptr;
		tail=nullptr;
		return;
	}
	else if(tail!=nullptr)
	{
		removeValue(tail->value);
	}
}
void IntLinkedList::removeFirst()
{
	if(isEmpty())
		return;
	Element *temp=head->ptr;
	delete head;
	head=temp;
}
void IntLinkedList::addSorted(int val)
{
    if(isEmpty() || (head->ptr==nullptr && head->value>val))
	{
		prepend(val);
		return;
	}
	else if(head->ptr==nullptr && head->value<val)
	{
		tail->value=val;
		tail->ptr=nullptr;
		return;
	}
    Element *temp=head;
	while(temp->ptr!=nullptr)
	{
		if(temp->ptr->value>val)
		{
			prepend(val);
			return;
		}
		temp=temp->ptr;
	}
	tail->ptr=new Element;
	tail->ptr->value=val;
	tail->ptr->ptr=nullptr;
	tail=tail->ptr;
}
void IntLinkedList::addSorted(Element& e)
{
	if(isEmpty() || (head->ptr==nullptr && head->value>e.value))
	{
		prepend(e.value);
		return;
	}
	else if(head->ptr==nullptr && head->value<e.value)
	{
		tail->value=e.value;
		tail->ptr=nullptr;
		return;
	}
    Element *temp=head;
	while(temp->ptr!=nullptr)
	{
		if(temp->ptr->value>e.value)
		{
			prepend(e.value);
			return;
		}
		temp=temp->ptr;
	}
	tail->ptr=new Element;
	tail->ptr->value=e.value;
	tail->ptr->ptr=nullptr;
	tail=tail->ptr;
}
void IntLinkedList::addSorted(int val, bool uniq=false)
{
	if(isEmpty() || (head->ptr==nullptr && head->value>val))
	{
		prepend(val);
		return;
	}
	else if(head->ptr==nullptr && head->value<val)
	{
		tail->value=val;
		tail->ptr=nullptr;
		return;
	}
    Element *temp=head;
	while(temp->ptr!=nullptr)
	{
		if(temp->ptr->value>val)
		{
			prepend(val);
			return;
		}
		temp=temp->ptr;
	}
	tail->ptr=new Element;
	tail->ptr->value=val;
	tail->ptr->ptr=nullptr;
	tail=tail->ptr;
}
void IntLinkedList::addSorted(Element& e, bool uniq=false)
{
	if(isEmpty() || (head->ptr==nullptr && head->value>e.value))
	{
		prepend(e.value);
		return;
	}
	else if(head->ptr==nullptr && head->value<e.value)
	{
		tail->value=e.value;
		tail->ptr=nullptr;
		return;
	}
    Element *temp=head;
	while(temp->ptr!=nullptr)
	{
		if(temp->ptr->value>e.value)
		{
			prepend(e.value);
			return;
		}
		temp=temp->ptr;
	}
	tail->ptr=new Element;
	tail->ptr->value=e.value;
	tail->ptr->ptr=nullptr;
	tail=tail->ptr;
}
void IntLinkedList::addSorted(IntLinkedList li)
{
	Element * temp=li.head;
	while(temp!=nullptr)
	{
		addSorted(*temp,true);
		temp=temp->ptr;
	}
}
void IntLinkedList::removeValue(int val)
{
	if(contains(val))
	{
		Element *temp=head;
		Element *prev;
		while(temp!=nullptr)
		{
            if(temp->value==val)
            {
				if(temp==head)
				{
					head=head->ptr;
					delete temp;
				}
				else if(temp->ptr==nullptr)
				{
					tail=prev;
					tail->ptr=nullptr;
					delete temp;
				}
				else
				{
					prev->ptr=temp->ptr;
					delete temp;
				}
				return;
            }
			prev=temp;
			temp=temp->ptr;
		}
		return;
	}
	std::cout<<"Element nieznaleziony\n";
}
void print(IntLinkedList li)
{
	if(li.head==nullptr)
	{
		std::cout<<"[]\n";
		return;
	}
	std::cout<<"[ "<<li.head->value;
	if(li.head!=nullptr)
	{
		Element *temp=li.head->ptr;
		while(temp!=nullptr)
		{
			std::cout<<", "<<temp->value;
			temp=temp->ptr;
		}
	}
	std::cout<<" ]"<<std::endl;
}

