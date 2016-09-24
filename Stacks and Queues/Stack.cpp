//
// Created by radusqrt on 9/22/16.
//

#include <iostream>
#include "Stack.h"

template <class T>
Stack <T>::Stack () {
    last = NULL;
    size = 0;
}

template <class T>
Stack <T>::~Stack () {
    if (last != NULL) {
        while (last->prev != NULL) {
            last = last->prev;
            delete last->next;
        }

        delete last;
    }
}

template <class T>
bool Stack <T>::empty () {
    return (last == NULL);
}

template <class T>
T Stack <T>::top () {
    return last->data;
}

template <class T>
T Stack <T>::pop () {
    if (last != NULL) {
        T toReturn = last->data;

        if (last->prev == NULL) {
            delete last;
            last = NULL;
        } else {
            last = last->prev;
            delete last->next;
        }
        size --;

        return toReturn;
    }
}

template <class T>
void Stack <T>::push (T value) {
    if (last == NULL) {
        last = new Node <T> ();
        last->data = value;
    } else {
        Node <T> *newNode = new Node <T> ();
        newNode->data = value;
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
    }
    size ++;
}

template <class T>
int Stack <T>::getSize () {
    return size;
}

template class Stack <int>;