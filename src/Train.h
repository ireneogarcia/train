#ifndef TRAIN_H_
#define TRAIN_H_
#include <iostream>
#include "Line.h"
using namespace std;

class Train {
    int currentStop;
    float speed;
    Line line;
    static int trainNumber;
public:
    Train();
    Train (int cstop,float speed,Line l);
    int getCurrentStop();
    float getSpeed();
    void go();
    void stop();

};


#endif
