#include "geometryczny.h"
int geometryczny(int * tab,int n)
{
    int q=tab[1]/tab[0];
    for(int i=1;i<n-1;i++)
    {
        if(tab[i+1]/tab[i]!=q)
        {   
            return 0;
        }


    }
    return 1;

}