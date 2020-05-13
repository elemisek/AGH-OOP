#include "MapPoint.h"
#include "MapDist.h"
#include <string>
#include <iostream>

MapPoint* construct(std::string name, double latitude, double longitude)
{
	MapPoint* wsk=new MapPoint;
	wsk->name=name;
	wsk->longitude=longitude;
	wsk->latitude=latitude;
	return wsk;
}
void print(MapPoint* wsk)
{
	std::cout<<"Wspolrzedne dla: "<<wsk->name<<". Dlugosc: "<<wsk->longitude<<". Szerokosc: "<<wsk->latitude<<std::endl;
}
void print(const MapPoint* wsk)
{
	std::cout<<"Wspolrzedne dla: "<<wsk->name<<". Dlugosc: "<<wsk->longitude<<". Szerokosc: "<<wsk->latitude<<std::endl;
}
void movePoint(MapPoint* wsk, double latitudeShift, double longitudeShift)
{
	wsk->longitude+=longitudeShift;
	wsk->latitude+=latitudeShift;
}
const MapPoint& closestFrom(MapPoint* wsk1, MapPoint* wsk2, MapPoint* wsk3)
{
    const MapDist d1=distance(*wsk1, *wsk2);
    const MapDist d2=distance(*wsk1, *wsk3);
    if(angularDistance(d1)>angularDistance(d2))
		return *wsk3;
	else if(angularDistance(d1)<angularDistance(d2))
		return *wsk2;
	std::cout<<"Taka sama odleglosc, zwracam pierwszy podany"<<std::endl;
	return *wsk2;
}
MapPoint inTheMiddle(MapPoint* wsk, const MapPoint* wsk2, std::string temp_name)
{
MapPoint temp;
temp.name=temp_name;
temp.latitude=(wsk->latitude+wsk2->latitude)/2;
temp.longitude=(wsk->longitude+wsk2->longitude)/2;
return temp;
}
void clear(MapPoint* name)
{
delete name;
}

void clear(MapPoint* name1, MapPoint* name2, MapPoint* name3)
{
delete name1;
delete name2;
delete name3;
}

