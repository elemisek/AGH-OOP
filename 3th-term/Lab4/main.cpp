/*
 * Prosze dopisa� kod, doda� nowe pliki students.h i students.cpp,
 * tak aby program si� wykonywa�, a wynik jego dzialania
 * byl taki sam, jak podany na ko�cu tego pliku.
 *
 * Prosze napisac funkcje wykonujace operacje na listach zaimplementowanych
 * na tablicach dynamicznych, reprezentujacych list� studentow.
 * Wszystkie tablice przechowuj� wska�niki do poszczeg�lnych warto�ci
 * i s� dynamicznie alokowane, dostosuj�c si� do liczby wska�nik�w do element�w
 * kt�re maj� by� w nich przechowywane.
 * Alokacj� pami�ci mo�na zrealizowa� za pomoc� new albo malloc/calloc
 * Prosze zwrocic uwage na dobre zarz�dzanie pami�ci�.
 * Nale�y napisa� funkcje inicjuj�ce takie listy, dodaj�ce elementy oraz kasuj�ce listy.
 *
 * W tablicy "namesList" przechowywane s� wska�niki do pierwszego i drugiego imienia
 * studenta oddzielone jedn� spacj�.
 * W tablicy "surnamesList" przechowywane s� nazwiska studentow.
 * W tablicy "semesterList" przechowywany jest aktualny semestr studi�w studenta
 *
 * UWAGA!
 * Mo�na korzysta� z funkcji bibliotecznych (strlen, strcpy)
 * Mo�na r�wnie� napisa� w�asne funkcje.
 *
 * Pliku main.cpp, nie wolno modyfikowac.
 *
 * Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
 * o nazwie Lab02. Program nalezy kompilowac z flagami -Wall -pedantic.

 * Makefile powinien zawierac rowniez regu�y: "clean", ktora usuwa pliki
 * obiektowe i plik wykonywalny, "run" - wykonywanie programu oraz "all" (main + run)
 * Rozwiazanie (czyli spakowany katalog z dodanymi plikami, makefile i main.cpp)
 * nale�y wys�a� na UPEL. Nazwa spakowanego katalogu: nazwisko_l3
 * (same ma�e litery bez polskich znak�w)
 * Prosz� wcze�niej wywo�a� make clean!
*/
#include "students.h"

int main ()
{
  int numberOfStudents = 0;
  char** namesList = NULL;
  char** surnamesList = NULL;
  int* semesterList = NULL;

  AddStudent(&numberOfStudents, &namesList, &surnamesList, &semesterList, "Adam Klaudiusz","Nowak", 1);
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &semesterList, "Piotr Marek", "Kowalski", 3);
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &semesterList, "Brunon Marcel", "Jankowski", 7);

  std::cout << "\nSame nazwiska:\n";
  PrintListContent (numberOfStudents, surnamesList);

  std::cout << "\nSame semestry:\n";
  PrintListContent (numberOfStudents, semesterList);

  std::cout << "\nImiona i nazwiska:\n";
  PrintListContent (numberOfStudents, namesList,surnamesList);

  std::cout << "\nWszystko:\n";
  PrintListContent (numberOfStudents, namesList, surnamesList, semesterList);

  DeleteStudent(&numberOfStudents, &namesList, &surnamesList, &semesterList,0);
  //nie dziala
  std::cout << "\nPo usuni�ciu pierwszego:\n";

  PrintListContent (numberOfStudents, namesList, surnamesList, semesterList);
  ClearStudents (&numberOfStudents, &namesList, &surnamesList, &semesterList);
  std::cout << "\nPo usuni�ciu wszystkich:\n";
  PrintListContent (numberOfStudents, namesList, surnamesList, semesterList);
  return 0;
}
/* wynik dzialania programu:
 ./main
Same nazwiska:
Nowak
Kowalski
Jankowski

Same semestry:
1
3
7

Imiona i nazwiska:
Adam Klaudiusz Nowak
Piotr Marek Kowalski
Brunon Marcel Jankowski

Wszystko:
Nowak, Adam Klaudiusz - semestr 1
Kowalski, Piotr Marek - semestr 3
Jankowski, Brunon Marcel - semestr 7

Po usuni�ciu pierwszego:
Kowalski, Piotr Marek - semestr 3
Jankowski, Brunon Marcel - semestr 7

Po usuni�ciu wszystkich:

*/
