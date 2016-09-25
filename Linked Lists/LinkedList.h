//
// Created by radusqrt on 9/19/16.
//

#ifndef CTCI_6TH_EDITION_LINKEDLIST_H
#define CTCI_6TH_EDITION_LINKEDLIST_H

#include "../Utils/LinkedListNode.h"

template <class T>
class LinkedList {
    LinkedListNode <T> *head, *tail;

public:
    LinkedList ();
    ~LinkedList ();
    LinkedListNode <T>* getHead ();
    void insert (T element);
    void printList ();
    void removeDuplicates ();
    bool kthToLast (int k, T &data);
    void deleteMiddleNode (LinkedListNode <T> *node);
    void partition (int value);
    void addList (LinkedList &toAdd, LinkedList &result);
    bool isPalindrome ();
};

#endif //CTCI_6TH_EDITION_LINKEDLIST_H
