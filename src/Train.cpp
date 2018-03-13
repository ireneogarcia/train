#include "Train.h"
#include <unistd.h>

int Train::trainNumber=0;

Train::Train(){
    currentStop = 0;
    speed = 0;
}

Train::Train (int cstop,float speed,Line l) {
 currentStop=cstop;
 this->speed=speed;
 line =l;
 trainNumber++;

}

void Train::stop() {
    this->currentStop++;
    std::cout <<"Tren "<<trainNumber <<" saliendo de la parada" << currentStop<<", "<< line.getStop(currentStop).getStopName()<<'\n';
    if (currentStop==line.getTotalStops()-1){
        std::cout << "-------------Final del trayecto-------------" << '\n';
    }else{
        speed = 0;
        sleep(1);
        std::cout << "----------------Última llamada----------------------" << '\n';
        sleep(1);
    go();
    }

}


void Train::go( ){
    // TO DO this->speed = speed;
    speed = 100;
    int timeToNextStop= line.getStop(currentStop).getDistanceToNext()/speed;
    std::cout <<"Tren "<<trainNumber <<" saliendo de la parada" << currentStop<<", "<< line.getStop(currentStop).getStopName()<<'\n';
    for (int i = 0; i < timeToNextStop; i++) {
        std::cout << ". "<<endl;
        sleep(1);
        if (i==timeToNextStop/2 && currentStop<line.getTotalStops()) {
            std::cout << "-------------Próxima parada: "<< line.getStop(currentStop+1).getStopName()<< "-------------" << '\n';
        }

    }
    stop();
}

int Train::getCurrentStop() {
    return currentStop;
}
float Train::getSpeed() {
    return speed;
}
