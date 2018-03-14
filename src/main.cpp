#include <iostream>
#include "Train.h"
#include "Line.h"
#include "Stop.h"
#include <thread>
#include <unistd.h>
#include <vector>

void start(Train t){
    t.moveOn();
}
void createLines(std::vector<Line>& l){
    Line linec4("c4");
    linec4.addStop(Stop ("Fuencarral", 500));
    linec4.addStop(Stop ("El Goloso", 300));
    linec4.addStop(Stop("Tres Cantos", 600));
    l.push_back(linec4);
    Line linec3("c3");
    linec3.addStop(Stop ("Aluche", 300));
    linec3.addStop(Stop ("Embajadores", 650));
    linec3.addStop(Stop ("Atocha", 400));
    l.push_back(linec3);
    Line linec1("c1");
    linec1.addStop(Stop ("Humanes", 300));
    linec1.addStop(Stop ("Fuenlabrada", 650));
    linec1.addStop(Stop ("Moraleja", 400));
    l.push_back(linec1);
    Line linec2("c2");
    linec2.addStop(Stop ("Mostoles", 300));
    linec2.addStop(Stop ("Pradillo", 650));
    linec2.addStop(Stop ("Getafe", 400));
    l.push_back(linec2);
}

int main() {
    std::vector<Line> lines;
    createLines(lines);
    Train train1(0,50,lines[0]);
    Train train2(0,50,lines[1]);
    Train train3(0,50,lines[2]);
    Train train4(0,50,lines[3]);
    std::vector<Train> trains;
    trains.push_back(train1);
    trains.push_back(train2);
    trains.push_back(train3);
    trains.push_back(train4);

    /*Line linec4("c4");
    linec4.addStop(Stop ("Fuencarral", 500));
    linec4.addStop(Stop ("El Goloso", 300));
    linec4.addStop(Stop("Tres Cantos", 600));
    Train train1(0,50,linec4);
    Line linec3("c3");
    linec3.addStop(Stop ("Aluche", 300));
    linec3.addStop(Stop ("Embajadores", 650));
    linec3.addStop(Stop ("Atocha", 400));
    Train train2(0,50,linec3);*/
    std::thread threadTrain1(start, trains[0]);
    //sleep(3);
    std::thread threadTrain2(start, trains[1]);
    std::thread threadTrain3(start, trains[2]);
    std::thread threadTrain4(start, trains[3]);
    threadTrain1.join();
    threadTrain2.join();
    threadTrain3.join();
    threadTrain4.join();
}
