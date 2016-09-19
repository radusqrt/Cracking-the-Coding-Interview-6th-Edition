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
    Node <T>* getHead ();
    void insert (T element);
    void printList ();
    void removeDuplicates ();
    bool kthToLast (int k, T &data);
    void deleteMiddleNode (Node <T> *node);
    void partition (int value);
};

#endif //CTCI_6TH_EDITION_LINKEDLIST_H
