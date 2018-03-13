#ifndef LINE_H_
#define LINE_H_
#include "Stop.h"
#include <vector>
#include <iostream>
using namespace std;

class Line {
string lineName;
std::vector<Stop> stops;

public:
    Line (){};
    Line(string lineName):lineName(lineName){};
void addStop(Stop stop);
Stop getStop(int i);
//Stop stopFind(string stopName);

};

#endif
