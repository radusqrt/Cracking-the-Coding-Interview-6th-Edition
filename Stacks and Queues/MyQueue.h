//
// Created by radusqrt on 9/24/16.
//

#ifndef CTCI_6TH_EDITION_MYQUEUE_H
#define CTCI_6TH_EDITION_MYQUEUE_H


#include "Stack.h"

class MyQueue {
    Stack <int> A, B;

public:
    void push (int value);
    int pop ();
    bool empty ();
    int front ();
};


#endif //CTCI_6TH_EDITION_MYQUEUE_H
