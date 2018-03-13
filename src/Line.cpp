#include "Line.h"

void Line::addStop(Stop stop){
    stops.push_back(stop);
}

Stop Line::getStop(int i){
    return stops[i];
}

// Stop Line::stopFind(string stopName){
//     for(auto stop:stops){
//         if (stopName==Stop::stop.getStopName()){
//             return stop;
//         }
//     }
//     std::cout << "This stop doesn't exist" << '\n';
//     return stops[0];
// }
