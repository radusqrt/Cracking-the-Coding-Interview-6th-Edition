//
// Created by radusqrt on 9/23/16.
//

#ifndef CTCI_6TH_EDITION_STACKWITHMIN_H
#define CTCI_6TH_EDITION_STACKWITHMIN_H


#include "Stack.h"

class StackWithMin {
    Stack <int> stiva, minim;

public:
    int pop ();
    int top ();
    int getMin () ;
    void push (int value);
    bool empty ();
};


#endif //CTCI_6TH_EDITION_STACKWITHMIN_H
