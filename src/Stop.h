#ifndef STOP_H_
#define STOP_H_
#include <iostream>
#include <mutex>
#include <chrono>
#include <vector>
using namespace std;


class Stop {
private:
string stopName;
float distanceToNext;

public:
    mutex mx;
    Stop(string stopName, float distanceToNext):stopName(stopName),distanceToNext(distanceToNext){}
    Stop (){};
    float getDistanceToNext();
    string getStopName();

};
#endif
