//
// Created by radusqrt on 9/22/16.
//

#ifndef CTCI_6TH_EDITION_QUEUE_H
#define CTCI_6TH_EDITION_QUEUE_H


#include "../Node.h"

template <class T>
class Queue {
    Node <T> *first, *last;

public:
    Queue ();
    ~Queue ();
    bool empty ();
    T front ();
    T pop ();
    void push (T value);
};

#endif //CTCI_6TH_EDITION_QUEUE_H
