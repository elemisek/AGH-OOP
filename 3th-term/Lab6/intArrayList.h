#pragma once
#include<iostream>
using namespace std;

class IntArrayList
{
private:
    int *tab;
    int size;
    int MaxSize;

public:
    IntArrayList(int MaxSize);
    IntArrayList();
    ~IntArrayList();
    void print();
    int find(int val);
    void printFind(int val);
    void add(int val);
    void add(int *tab2, int numOfElements);
    void add(int index, int val);
    void add(int val, bool condition);
    void remove(int val);
    void remove(int val, int range);
};
