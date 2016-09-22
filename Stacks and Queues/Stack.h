//
// Created by radusqrt on 9/22/16.
//

#ifndef CTCI_6TH_EDITION_STACK_H
#define CTCI_6TH_EDITION_STACK_H

#include "../Node.h"

template <class T>
class Stack {
    Node <T> *last;

public:
    Stack ();
    ~Stack ();
    bool empty ();
    T top ();
    T pop ();
    void push (T value);
};

#endif //CTCI_6TH_EDITION_STACK_H