//
// Created by radusqrt on 9/19/16.
//

#include <cstddef>
#include <iostream>
#include "LinkedList.h"

template <class T>
LinkedList <T>::LinkedList () {
    head = tail = NULL;
}

template <class T>
LinkedList <T>::~LinkedList () {
    while (head != NULL) {
        Node <T>* aux = head;
        head = head->next;
        delete aux;
    }
}

template <class T>
void LinkedList <T>::insert(T element) {
    if (tail == NULL) {
        head = new Node <T> ();
        head->data = element;
        tail = head;
    } else {
        Node <T> *newNode = new Node <T> ();
        newNode->data = element;
        tail->next = newNode;
        tail = newNode;
    }
}

template <class T>
void LinkedList <T>::printList() {
    Node <T> *aux = head;

    while(aux != NULL) {
        std::cout << aux->data << " ";
        aux = aux->next;
    }
    std::cout << "\n";
}

template <class T>
void LinkedList <T>::removeDuplicates() {
    Node <T> *first = head;

    while (first->next != NULL) {
        Node <T> *second = first;

        while (second != NULL && second->next != NULL) {
            if (second->next->data == first->data) {
                Node <T> *newNext = second->next->next;

                delete second->next;
                second->next = newNext;
            }
            second = second->next;
        }
        first = first->next;
    }
}

template class LinkedList <int>;