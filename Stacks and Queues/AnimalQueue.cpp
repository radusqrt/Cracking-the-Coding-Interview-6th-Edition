//
// Created by radusqrt on 9/24/16.
//

#include "AnimalQueue.h"

void AnimalQueue::pushDog () {
    dogQueue.push (++ time);
}

void AnimalQueue::pushCat () {
    catQueue.push (++ time);
}

int AnimalQueue::getAny () {
    if (dogQueue.empty () && catQueue.empty ()) {
        return 0;
    } else if (dogQueue.empty () && !catQueue.empty ()) {
        return catQueue.pop ();
    } else if (!dogQueue.empty () && catQueue.empty ()) {
        return dogQueue.pop ();
    } else {
        if (dogQueue.front () < catQueue.front ()) {
            return dogQueue.pop ();
        } else {
            return catQueue.pop ();
        }
    }
}

int AnimalQueue::getDog () {
    if (!dogQueue.empty ()) {
        return dogQueue.pop ();
    }
    return 0;
}

int AnimalQueue::getCat () {
    if (!catQueue.empty ()) {
        return catQueue.pop ();
    }
    return 0;
}

bool AnimalQueue::empty () {
    return (dogQueue.empty () && catQueue.empty ());
}

AnimalQueue::AnimalQueue () {
    time = 0;
}
