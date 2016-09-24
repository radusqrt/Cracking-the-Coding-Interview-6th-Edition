//
// Created by radusqrt on 9/24/16.
//

#include <iostream>
#include "SetOfStacks.h"

SetOfStacks::SetOfStacks (int size) {
    this->size = size;
}

void SetOfStacks::push (int value) {
    int i;
    bool added = false;

    for (i = 0; i < set.size () && !added; ++ i) {
        if (set[i]->getSize () < size) {
            set[i]->push (value);
            added = true;
        }
    }

    if (!added) {
        Stack <int> *newStack = new Stack <int> ();
        newStack->push (value);
        set.push_back (newStack);
    }
}

int SetOfStacks::pop () {
    int toReturn = set[set.size () - 1]->pop ();

    if (set[set.size () - 1]->empty ()) {
        set.erase (set.begin () + set.size () - 1);
    }

    return toReturn;
}

int SetOfStacks::popAt (int index) {
    int toReturn = set[index]->pop ();

    if (set[index]->empty ()) {
        set.erase (set.begin () + index);
    }

    return toReturn;
}


