//
// Created by radusqrt on 9/24/16.
//

#include "MyQueue.h"

void MyQueue::push (int value) {
    A.push (value);
}

int MyQueue::pop () {
    if (!B.empty ()) {
        return B.pop ();
    } else {
        while (!A.empty ()) {
            B.push (A.pop ());
        }

        return B.pop ();
    }
}

bool MyQueue::empty () {
    return (A.empty () && B.empty ());
}

int MyQueue::front () {
    if (!B.empty ()) {
        return B.top ();
    } else {
        while (!A.empty ()) {
            B.push (A.pop ());
        }

        return B.top ();
    }
}
