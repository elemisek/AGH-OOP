/* Proszê dopisaæ kod, dodaæ nowe pliki, tak aby program siê wykonywa³
 * a wynik jego dzia³ania by³ taki sam, jak podany na koñcu tego pliku.

 * Struktura MapPoint (pliki MapPoint.h, MapPoint.cpp) reprezentuje
 * punkt na mapie sk³adaj¹cy siê z nazwy, d³ugoœci (longitude)
 * i szerokoœci (latitude) geograficznej, bez oznaczania pó³kul.
 * Funkcje construct i clear to funkcje tworz¹ce i usuwaj¹ce punkt.

 * Funkcja inTheMiddle powinna tworzyæ nowy punkt na mapie o zadanej
 * nazwie i po³o¿eniu, które jest œredni¹ arytmetyczn¹ z po³o¿eñ
 * podanych punktów czyli x = (x1 + x2)/2 itp.

 * Struktura MapDist (pliki MapDist.h, MapDist.cpp)reprezentuje
 * odleg³oœæ pomiêdzy dwoma punktami.
 * Odleg³oœæ wzd³u¿ po³udników lub równole¿ników nale¿y
 * obliczyæ po prostu odejmuj¹c od siebie wspó³rzêdne punktów
 * pocz¹tkowego i koñcowego (funkcja distance).

 * Funkcja angularDistance oblicza pierwiastek z sumy kwadratów
 * odleg³oœci wzglêdem po³udników i równole¿ników, czyli
 * sqrt(delta_x*delta_x + delta_y*delta_y). Funkcja obliczaj¹ca
 * pierwiastek nazywa siê: sqrt(double) i znajduje siê w bibliotece
 * "cmath".

 * Funkcja closestFrom pobiera 3 argumenty. Pierwszy argument jest
 * punktem referencyjnym. Z dwóch kolejnych wybiera ten, który jest
 * najbli¿ej punktu referencyjnego. Funcja wykorzystuje angularDistance

 * Proszê zadbaæ o dobre zarz¹dzanie pamiêci¹.

 * Pliku main.cpp, nie wolno modyfikowaæ.
 * Skonfiguruj plik konfiguracyjny cmake tak, aby:
 * - plikiem wynikowym by³ main
 * - program kompilowa³ siê z flagami -Wall -g - pedantic.
 * - by³y zdefiniowane cele u¿ytkownika:
 *   run, check uruchamiaj¹cy valgrind ./main

 * Kody Ÿród³owe powinny znajdowaæ siê w katalogu nazwisko_lab5 do którego nikt oprócz
 * w³aœciciela nie ma praw dostêpu.
 * UWAGA! Wysy³amy spakowany katalog, nie oddzielne pliki.
 * Wczeœniej kasujemy niepotrzebne pliki z cmake wysy³amy tylko plik CMakeLists.txt.

 * Podczas wykonywania zadania nie wolno korzystaæ z internetu, notatek,
 * ani ¿adnych innych materia³ów
*/


#include <iostream>
#include "MapPoint.h"
#include "MapDist.h"

int main() {
  const double longitude = 19.938333;
  const double latitude = 50.061389;
  MapPoint* krk     = construct("Kraków", latitude, longitude);
  print(krk);
  MapPoint* nyc     = construct("Nowy Jork", 40.7127, -74.0059 );
  print(nyc);
  MapPoint* porto   = construct("Porto", 41.162142, -8.621953 );
  MapPoint* irkutsk = construct("Irkuck",  52.283333, 104.283333);
  const MapPoint& siberiaCapital = *irkutsk;
  print(&siberiaCapital);

  const double longitudeShift = 4.1234;
  const double latitudeShift = -25.987;
  movePoint (irkutsk, latitudeShift, longitudeShift);
  std::cout << "Po przesuniêciu:\n";
  print (&siberiaCapital);

  const MapDist d = distance(*nyc, *porto);
  std::cout <<"Odleg³oœci miêdzy NYC i Porto: \nRó¿nica szerokoœci: "<< d.latitude << " Ró¿nica d³ugoœci: " << d.longitude  << " " << "Odleg³oœæ: "<<angularDistance(d) << std::endl;

  const MapPoint& cl = closestFrom(krk, porto, irkutsk);
  std::cout << "Najbli¿ej Krakowa jest " << cl.name << std::endl;

  MapPoint mp = inTheMiddle(krk, &siberiaCapital, "Gdzieœ w Rosji");
  print(&mp);

  clear(krk, nyc, porto);
  clear(irkutsk);
}
/** Wynik dzia³ania programu:
Wspó³rzêdne dla Kraków. D³ugoœæ: 50.0614. Szerokoœæ: 19.9383
Wspó³rzêdne dla Nowy Jork. D³ugoœæ: 40.7127. Szerokoœæ: -74.0059
Wspó³rzêdne dla Irkuck. D³ugoœæ: 52.2833. Szerokoœæ: 104.283
Po przesuniêciu:
Wspó³rzêdne dla Irkuck. D³ugoœæ: 26.2963. Szerokoœæ: 108.407
Odleg³oœci miêdzy NYC i Porto:
Ró¿nica szerokoœci: -0.449444 Ró¿nica d³ugoœci: -65.3839 Odleg³oœæ: 65.3855
Najbli¿ej Krakowa jest Porto
Wspó³rzêdne dla Gdzieœ w Rosji. D³ugoœæ: 38.1789. Szerokoœæ: 64.1725
*/
