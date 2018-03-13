#ifndef LINE_H_
#define LINE_H_
#include "Stop.h"
#include <vector>


class Line {
string lineName;
std::vector<Stop> stops;

public:
    Line(string lineName):lineName(lineName){}
void addStop(Stop stop);
Stop getStop(int i);
Stop* stopFind(string stopName);

};

#endif
