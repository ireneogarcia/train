#ifndef STOP_H_
#define STOP_H_
#include <iostream>
using namespace std;

class Stop {
private:
string stopName;
float distanceToNext;

public:
    Stop(string stopName, float distanceToNext):stopName(stopName),distanceToNext(distanceToNext){}
    Stop (){};
    float getDistanceToNext();
    string getStopName();

};
#endif
