#pragma once
class Element
{
public:
    int value;
    Element *wsk;
};

class IntLinkedList
{
public:
	IntLinkedList();
	~IntLinkedList();
	int size();
	bool isEmpty();
	void print();
	void prepend(int value);
	void addSorted(int value);
	void removeLast();
	void removeValue(int value);
	bool contains(int value);
private:
	Element *head;
	Element *tail;
};
