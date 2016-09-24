//
// Created by radusqrt on 9/24/16.
//

#ifndef CTCI_6TH_EDITION_SETOFSTACKS_H
#define CTCI_6TH_EDITION_SETOFSTACKS_H


#include <vector>
#include "Stack.h"

class SetOfStacks {
    std::vector <Stack <int> *> set;
    int size;

public:
    SetOfStacks (int size = 10);
    void push (int value);
    int pop ();
    int popAt (int index);
};


#endif //CTCI_6TH_EDITION_SETOFSTACKS_H
