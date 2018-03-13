#include "Line.h"

Line::void addStop(Stop stop){
    stops.push_back(stop);
}

Line::Stop getStop(int i){
    return stops[i];
}

Line::Stop* stopFind(string stopName){
    for(auto stop:stops){
        if (stopName==stop.name){
            return *stop;
        }
    }
    std::cout << "This stop doesn't exist" << '\n';
    return NULL;
}
