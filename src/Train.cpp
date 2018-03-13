#include "Train.h"

#include <unistd.h>

Train::Train(){
    currentStop = 0;
    float speed = 0;
}

Train::Train (int cstop,float speed,Line l) {
 currentStop=cstop;
 this->speed=speed;
 line =l;

}

void Train::stop() {
    this->currentStop++;
    std::cout << "He llegado a la parada" << currentStop << '\n';
    speed = 0;
}


void Train::go( ){
    // TO DO this->speed = speed;
    speed = 50;
    std::cout << "arranco de la parada " << currentStop <<'\n';
    sleep((line.getStop(currentStop).getDistanceToNext())/speed);
    stop();
}

int Train::getCurrentStop() {
    return currentStop;
}
float Train::getSpeed() {
    return speed;
}
