#pragma once
#include<iostream>
#include<string.h>
class IntLinkedList;
class Element
{
	friend class IntLinkedList;
	friend void print(IntLinkedList lists);
private:
    int value;
    Element *ptr;
public:
    Element();
    Element(int val);
    ~Element();
    Element(Element& e);
};

class IntLinkedList
{
	friend void print(IntLinkedList lists);
private:
	Element *head;
	Element *tail;
    std::string name;
public:
	IntLinkedList();
	IntLinkedList(std::string new_name);
	~IntLinkedList();
	int size();
	bool isEmpty();
	void print();
	void prepend(int val);
	void prepend(Element& e);
	void append(int val);
	void append(Element& e);
	void append(IntLinkedList lists);
	Element* contains(int val);
	void removeLast();
	void removeFirst();
	void addSorted(int val);
	void addSorted(Element& e);
	void addSorted(int val, bool condition);
	void addSorted(Element& e, bool condition);
	void addSorted(IntLinkedList lists);
	void removeValue(int val);
};
void print(IntLinkedList lists);

