#include "print.h"
#include <iostream>
using namespace std;
void print(int * tab,int n)
{
    cout << tab[0];
    for(int i=1;i<n;i++)
    cout << ", " << tab[i];
    cout << endl;
}