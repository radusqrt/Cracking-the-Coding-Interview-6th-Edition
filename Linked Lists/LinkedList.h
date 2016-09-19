//
// Created by radusqrt on 9/19/16.
//

#ifndef CTCI_6TH_EDITION_LINKEDLIST_H
#define CTCI_6TH_EDITION_LINKEDLIST_H

#include "Node.h"

template <class T>
class LinkedList {
    Node <T> *head, *tail;

public:
    LinkedList ();
    ~LinkedList ();
    void insert (T element);
    void printList ();
    void removeDuplicates ();
};

#endif //CTCI_6TH_EDITION_LINKEDLIST_H