#ifndef TRAIN_H_
#define TRAIN_H_
#include <iostream>
#include "Line.h"
using namespace std;

class Train {
    int currentStop;
    float speed;
    Line line;
    static int numberOfTrains;
    int trainIdenfier=0;
    string tabulator="";
public:
    Train();
    Train (int cstop,float speed,Line l);
    int getCurrentStop();
    float getSpeed();
    void moveOn();
    void go();
    void stop();

};


#endif
