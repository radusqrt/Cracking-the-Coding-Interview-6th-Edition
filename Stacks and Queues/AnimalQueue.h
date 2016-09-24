//
// Created by radusqrt on 9/24/16.
//

#ifndef CTCI_6TH_EDITION_ANIMALQUEUE_H
#define CTCI_6TH_EDITION_ANIMALQUEUE_H


#include "Queue.h"

class AnimalQueue {
    Queue <int> dogQueue;
    Queue <int> catQueue;
    int time;

public:
    AnimalQueue ();
    void pushDog ();
    void pushCat ();
    int getAny ();
    int getDog ();
    int getCat ();
    bool empty ();
};


#endif //CTCI_6TH_EDITION_ANIMALQUEUE_H
