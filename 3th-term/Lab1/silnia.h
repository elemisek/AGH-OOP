#pragma once
#include <iostream>
using namespace std;
int silnia(int a)
{
    int wynik=1;
    if(a<0)
    {
    cout << "brak rozwiazania ";
    return -1;
    }
    else
    {
        for(int i=2;i<=a;i++)
        {
            wynik*=i;

        }
    }
    return wynik;
    

}
int silnia_rec(int a)
{
    if(a<0)
    {
    cout << "brak rozwiazania ";
    return -1;
    }
    else if(a==1||a==0)
        return 1;
    else            
    {
        return a*silnia_rec(a-1);
    }
    

    

}