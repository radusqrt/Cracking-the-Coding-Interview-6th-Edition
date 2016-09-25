//
// Created by radusqrt on 9/19/16.
//

#ifndef CTCI_6TH_EDITION_NODE_H
#define CTCI_6TH_EDITION_NODE_H

#include <cstddef>

template <class T>
struct LinkedListNode {
    T data;
    LinkedListNode <T> *next, *prev;

public:
    LinkedListNode () {
        next = prev = NULL;
    }
};

template <class T>
LinkedListNode <T>* findIntersection (LinkedListNode <T> *head1, LinkedListNode <T> *head2) {
    int length1 = 0, length2 = 0;
    LinkedListNode <T> *aux, *aux2;

    aux = head1;
    while (aux != NULL) {
        length1 ++;
        aux = aux->next;
    }

    aux = head2;
    while (aux != NULL) {
        length2 ++;
        aux = aux->next;
    }

    aux = head1; aux2 = head2;
    if (length1 > length2) {
        length1 -= length2;
        while (length1 --) {
            aux = aux->next;
        }
    } else {
        length2 -= length1;
        while (length2 --) {
            aux2 = aux2->next;
        }
    }

    while (aux != NULL && aux2 != NULL && aux->data != aux2->data) {
        aux = aux->next;
        aux2 = aux2->next;
    }

    if (aux == NULL || aux2 == NULL) return NULL;
    return aux;
}

template <class T>
LinkedListNode <T> *findLoop (LinkedListNode <T> *head) {
    LinkedListNode <T> *slow, *fast;
    slow = fast = head;

    do {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

#endif //CTCI_6TH_EDITION_NODE_H
