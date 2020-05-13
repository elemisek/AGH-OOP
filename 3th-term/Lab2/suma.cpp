#include "suma.h"
int suma(int * tab,int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        suma+=tab[i];
    return suma;
}