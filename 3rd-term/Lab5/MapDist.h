#pragma once
#include<iostream>
#include<cstring>
#include<cmath>
#include "MapPoint.h"
struct MapDist
{
	double latitude;
	double longitude;
};
const MapDist distance(MapPoint, MapPoint);
double angularDistance(const MapDist);

