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
                if (second->next == NULL) {
                    tail = second;
                }
            } else {
                second = second->next;
            }

        }
        first = first->next;
    }
}

template <class T>
bool LinkedList <T>::kthToLast(int k, T &data) {
    if (k <= 0) {
        return false;
    }

    Node <T> *fast, *slow;
    fast = slow = head;
    k --;

    while (k -- && fast->next != NULL) {
        fast = fast->next;
    }

    if (k > 0) {
        return false;
    }

    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    data = slow->data;
    return true;
}

template <class T>
void LinkedList <T>::deleteMiddleNode(Node<T> *node) {
    if (node != head && node != tail) {
        node->data = node->next->data;
        Node <T> *secondNext = node->next->next;
        delete node->next;
        node->next = secondNext;
    }
}

template <class T>
Node<T> *LinkedList <T>::getHead() {
    return head;
}

template <class T>
void LinkedList <T>::partition(int value) {
    Node <T> *before, *beforeTail, *after, *curr;
    before = after = beforeTail = NULL;
    curr = head;

    while (curr != NULL) {
        Node <T> *nextValue = curr->next;

        if (curr->data < value) {
            if (before == NULL) {
                before = new Node <T> ();
                before->data = curr->data;
                beforeTail = before;
            } else {
                Node <T> *newNode = new Node <T> ();
                newNode->data = curr->data;
                beforeTail->next = newNode;
                beforeTail = newNode;
            }
        } else {
            if (after == NULL) {
                after = new Node <T> ();
                after->data = curr->data;
                tail = after;
            } else {
                Node <T> *newNode = new Node <T> ();
                newNode->data = curr->data;
                tail->next = newNode;
                tail = newNode;
            }
        }

        delete curr;
        curr = nextValue;
    }

    if (before != NULL) {
        head = before;
        beforeTail->next = after;
    } else {
        head = after;
    }
}

template class LinkedList <int>;