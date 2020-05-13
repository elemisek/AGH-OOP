#include "MapDist.h"
#include "MapPoint.h"
#include <string>

const MapDist distance(MapPoint wsk1, MapPoint wsk2)
{
    MapDist d;
    d.latitude=(wsk1.latitude)-(wsk2.latitude);
    d.longitude=(wsk1.longitude)-(wsk2.longitude);
	return d;
}
double angularDistance(const MapDist n)
{
	return sqrt((n.longitude*n.longitude)+(n.latitude*n.latitude));
}

