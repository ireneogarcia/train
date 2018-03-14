#include "Train.h"
#include <unistd.h>
#include <iomanip>


int Train::numberOfTrains=0;


Train::Train(){
    currentStop = 0;
    speed = 0;
}

Train::Train (int cstop,float speed,Line l) {
 currentStop=cstop;
 this->speed=speed;
 line =l;
 numberOfTrains++;
 trainIdenfier=numberOfTrains;
 if(trainIdenfier!=1){
     for (int i = 0; i < numberOfTrains; i++) {
         tabulator = tabulator +"\t";
     }

 }

}

void Train::stop() {
    this->currentStop++;
        speed = 0;
        sleep(2);
        //std::cout <<tabulator<< "----------------Última llamada----------------------" << '\n';
        //sleep(1);
}


void Train::go( ){

    // TO DO this->speed = speed;
    speed = 50;
    int timeToNextStop= line.getStop(currentStop).getDistanceToNext()/speed;
    std::cout <<tabulator<<"Tren "<<trainIdenfier <<" saliendo de la parada " << currentStop<<", "<< line.getStop(currentStop).getStopName()<<'\n';
    for (int i = 0; i < timeToNextStop; i++) {
        std::cout <<tabulator<< "\\/"<<endl;
        sleep(1);
        if (i==timeToNextStop/2 && currentStop<line.getTotalStops()) {
            std::cout << '\n';
            std::cout <<tabulator<< "-------------Próxima parada: "<< line.getStop(currentStop+1).getStopName()<< "-------------" << '\n';
            std::cout << '\n';
        }

    }

}

void Train::moveOn(){
    while(currentStop!=line.getTotalStops()-1){
        go();
        stop();
    }
    std::cout <<tabulator<< "-------------Final del trayecto-------------" << '\n';
}

int Train::getCurrentStop() {
    return currentStop;
}
float Train::getSpeed() {
    return speed;
}
