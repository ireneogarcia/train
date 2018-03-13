#ifndef TRAIN_H_
#define TRAIN_H_


class Train {
    int currentStop;
    float speed;
    Line line;
public:
    Train();
    Train (int cstop,float speed,Line l);
    int getCurrentStop();
    int getSpeed();
    void go( float speed);
    void stop();

};


#endif
