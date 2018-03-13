#include <iostream>
#include "Train.h"
#include "Line.h"
#include "Stop.h"

int main() {
    Line linec4("c4");
    Stop stop1("trescantos", 500);
    Stop stop2("tres", 500);
    Stop stop3("cantos", 500);
    linec4.addStop(stop1);
    linec4.addStop(stop2);
    linec4.addStop(stop3);
    Train train1(0,50,linec4);
    train1.go();
}
