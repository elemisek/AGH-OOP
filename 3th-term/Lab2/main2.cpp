/* Proszę dodać nowe pliki i napisać kod tak, aby program się wykonywał
 * a wynik jego działania był taki sam jak podany na końcu tego pliku.
 * Proszę napisać 6 funkcji wykonujących proste operacje 
 * i zwracające odpowiednie wartości.
 * Deklaracja każdej funkcji ma znajdować się w osobnym pliku nagłówkowym, 
 * a definicja w plikach .cpp
 *
 * Odpowiednie wartości zwracane proszę wywnioskować z załączonego 
 * wyniku na końcu tego pliku lub skorzystać z pomocniczego komentarza.
 *
 * UWAGA: funkcja srednia wykorzystuje funkcję suma zdefiniowaną w suma.h
 *
 * Napisać makefile, który powiniem mieć reguły:
 * main - w wyniku której powstaje program main na podstawie plików *.o
 * clean - usuwająca wszystki pliki *.o oraz plik main
 * test - uruchamiający plik main
 * all -  wykonujący main i test
 * UWAGA -  Warto na początku utworzyć sobie  wszystkie pliki nagłówkowe i puste funkcie
 * i plik Makefile, który skompiluje  i zlinkuje te wszystkie pliki,
 * a dopiero potem uzupełniać ciała funkcji. 
 *
 * Pliku main.cpp, nie należy modyfikowac.
 * W przypadku, gdy ktoś nie zdąży zaimplementować jakiejś funkcji,
 * niech pozostawi jej szkielet
 * Praca ma być samodzielna, nie wolno korzystać z żadnych pomocy
 *
 * Skonczone zadanie należy wyslac na UPEL w formie spakowanego katalogu 
 * do archiwum L2_nazwisko.tar.gz (tar -czvf L2_nazwisko.tar.gz ~/ppo/L2_nazwisko
*/

#include <iostream>
#include "print.h"
#include "suma.h"
#include "minimum.h"
#include "srednia.h"
#include "geometryczny.h"
#include "mediana.h"

using namespace std;

int main () {
  int wektor_1[] = {2, 4, 6, 8, 10, 12, 14};
  int wektor_2[] = {1, 2, 4, 8, 16, 32};
  const int N1 = 7;
  const int N2 = 6;
  
  cout << "Wektor_1: ";
  print (wektor_1,N1);
  cout << "Suma ciągu wektor_1 = "  << suma(wektor_1,N1)<<endl;
  cout << "Średnia arytmetyczna ciągu wektor_1 = "  << srednia(wektor_1,N1) << endl;
  cout << "Minimum ciągu wektor1 = " << minimum(wektor_1,N1) << endl << endl;

  cout << "Wektor_2: ";
  print (wektor_2,N2);
  cout << "Suma ciągu wektor_2 = "  << suma(wektor_2,N2)<<endl;
  cout << "Średnia arytmetyczna ciągu wektor_2 = "  << srednia(wektor_2,N2) << endl;
  cout << "Minimum ciągu wektor_2 = "<< minimum(wektor_2,N2) << endl << endl;

  if (geometryczny(wektor_1,N1)) cout<<"Ciąg wektor_1 jest geometryczny\n";
    else cout<<"Ciąg wektor_1 nie jest geometryczny\n";
  if (geometryczny(wektor_2,N2)) cout<<"Ciąg wektor_2 jest geometryczny\n";
    else cout << "Ciąg wektor_2 nie jest geometryczny\n\n";

//Mediana dla n nieparzystego - środkowy element ciągu
//Mediana dla m parzystego - średnia arytmetyczna ze środkowych elementów
  cout << "Mediana dla wektor_1 = "<<mediana(wektor_1, N1)<<endl;
  cout << "Mediana dla wektor_2 = "<<mediana(wektor_2, N2)<<endl;
  return 0;
}

/*
Oczekiwany wynik

./main2
Wektor_1: 2, 4, 6, 8, 10, 12, 14
Suma ciągu wektor_1 = 56
Średnia arytmetyczna ciągu wektor_1 = 8
Minimum ciągu wektor1 = 2

Wektor_2: 1, 2, 4, 8, 16, 32
Suma ciągu wektor_2 = 63
Średnia arytmetyczna ciągu wektor_2 = 10
Minimum ciągu wektor_2 = 1

Ciąg wektor_1 nie jest geometryczny
Ciąg wektor_2 jest geometryczny
Mediana dla wektor_1 = 8
Mediana dla wektor_2 = 6

*/
