#pragma once
#include<iostream>
#include<cstring>
struct MapPoint
{
	std::string name;
	double longitude;
	double latitude;
};
MapPoint* construct(std::string, double, double);
void print(MapPoint*);
void print(const MapPoint*);
void movePoint(MapPoint*, double, double);
const MapPoint& closestFrom(MapPoint*, MapPoint*, MapPoint*);
MapPoint inTheMiddle(MapPoint*, const MapPoint*,std::string);
void clear(MapPoint*);
void clear(MapPoint*,MapPoint*,MapPoint*);
