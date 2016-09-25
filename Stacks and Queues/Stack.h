//
// Created by radusqrt on 9/22/16.
//

#ifndef CTCI_6TH_EDITION_STACK_H
#define CTCI_6TH_EDITION_STACK_H

#include "../Utils/LinkedListNode.h"

template <class T>
class Stack {
    LinkedListNode <T> *last;
    int size;

public:
    Stack ();
    ~Stack ();
    bool empty ();
    T top ();
    T pop ();
    void push (T value);
    int getSize ();
};

void sortStack (Stack <int> *stack);

#endif //CTCI_6TH_EDITION_STACK_H
