//
// Created by radusqrt on 9/23/16.
//

#include <algorithm>
#include "StackWithMin.h"

int StackWithMin::pop () {
    minim.pop ();
    return stiva.pop ();
}

int StackWithMin::top () {
    return stiva.top ();
}

int StackWithMin::getMin () {
    return minim.top ();
}

void StackWithMin::push (int value) {
    stiva.push (value);
    if (minim.empty ()) {
        minim.push (value);
    } else {
        minim.push (std::min (value, minim.top ()));
    }
}

bool StackWithMin::empty () {
    return stiva.empty ();
}
