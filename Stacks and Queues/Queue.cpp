//
// Created by radusqrt on 9/22/16.
//

#include <cstddef>
#include "Queue.h"

template <class T>
Queue <T>::Queue () {
    first = last = NULL;
}

template <class T>
Queue <T>::~Queue () {
    if (first != NULL) {
        while (first->prev != NULL) {
            first = first->prev;
            delete first->next;
        }

        delete first;
        first = last = NULL;
    }
}

template <class T>
bool Queue <T>::empty () {
    return (first == NULL);
}

template <class T>
T Queue <T>::front () {
    if (first != NULL) {
        return first->data;
    }
}

template <class T>
T Queue <T>::pop () {
    if (first != NULL) {
        T toReturn = first->data;

        if (first->prev == NULL) {
            delete first;
            first = last = NULL;
        } else {
            first = first->prev;
            delete first->next;
        }

        return toReturn;
    }
}

template <class T>
void Queue <T>::push (T value) {
    if (first == NULL) {
        first = new LinkedListNode <T> ();
        first->data = value;
        last = first;
    } else {
        LinkedListNode <T> *newNode = new LinkedListNode <T> ();

        newNode->data = value;
        last->prev = newNode;
        newNode->next = last;
        last = newNode;
    }
}

template class Queue <int>;