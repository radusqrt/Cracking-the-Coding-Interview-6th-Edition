//
// Created by radusqrt on 9/19/16.
//

#ifndef CTCI_6TH_EDITION_NODE_H
#define CTCI_6TH_EDITION_NODE_H

template <class T>
struct Node {
    T data;
    Node <T> *next;

public:
    Node () {
        next = NULL;
    }
};

#endif //CTCI_6TH_EDITION_NODE_H
