#include <iostream>
#include "Train.h"
#include "Line.h"
#include "Stop.h"
#include <thread>
#include <unistd.h>


void start(Train t){
    t.moveOn();
}


int main() {
    Line linec4("c4");
    linec4.addStop(Stop ("Fuencarral", 500));
    linec4.addStop(Stop ("El Goloso", 300));
    linec4.addStop(Stop("Tres Cantos", 600));
    Train train1(0,50,linec4);
    Line linec3("c3");
    linec3.addStop(Stop ("Aluche", 300));
    linec3.addStop(Stop ("Embajadores", 650));
    linec3.addStop(Stop ("Atocha", 400));
    Train train2(0,50,linec3);
    std::thread threadTrain1(start, train1);
    //sleep(3);
    std::thread threadTrain2(start, train2);
    threadTrain1.join();
    threadTrain2.join();
}
