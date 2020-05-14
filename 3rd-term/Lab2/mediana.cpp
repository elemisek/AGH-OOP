#include "mediana.h"
int mediana(int * tab,int n)
{
    if(n%2)
    return tab[n/2];
    else
    return (tab[n/2-1]+tab[n/2])/2;
}