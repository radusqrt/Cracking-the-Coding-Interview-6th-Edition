//
// Created by radusqrt on 9/19/16.
//

#include <cstddef>
#include <iostream>
#include <stack>
#include "LinkedList.h"

template <class T>
LinkedList <T>::LinkedList () {
    head = tail = NULL;
}

template <class T>
LinkedList <T>::~LinkedList () {
    while (head != NULL) {
        LinkedListNode <T>* aux = head;
        head = head->next;
        delete aux;
    }
}

template <class T>
void LinkedList <T>::insert (T element) {
    if (tail == NULL) {
        head = new LinkedListNode <T> ();
        head->data = element;
        tail = head;
    } else {
        LinkedListNode <T> *newNode = new LinkedListNode <T> ();
        newNode->data = element;
        tail->next = newNode;
        tail = newNode;
    }
}

template <class T>
void LinkedList <T>::printList () {
    LinkedListNode <T> *aux = head;

    while(aux != NULL) {
        std::cout << aux->data << " ";
        aux = aux->next;
    }
    std::cout << "\n";
}

template <class T>
void LinkedList <T>::removeDuplicates () {
    LinkedListNode <T> *first = head;

    while (first->next != NULL) {
        LinkedListNode <T> *second = first;

        while (second != NULL && second->next != NULL) {
            if (second->next->data == first->data) {
                LinkedListNode <T> *newNext = second->next->next;

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
bool LinkedList <T>::kthToLast (int k, T &data) {
    if (k <= 0) {
        return false;
    }

    LinkedListNode <T> *fast, *slow;
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
void LinkedList <T>::deleteMiddleNode (LinkedListNode<T> *node) {
    if (node != head && node != tail) {
        node->data = node->next->data;
        LinkedListNode <T> *secondNext = node->next->next;
        delete node->next;
        node->next = secondNext;
    }
}

template <class T>
LinkedListNode<T> *LinkedList <T>::getHead () {
    return head;
}

template <class T>
void LinkedList <T>::partition (int value) {
    LinkedListNode <T> *before, *beforeTail, *after, *curr;
    before = after = beforeTail = NULL;
    curr = head;

    while (curr != NULL) {
        LinkedListNode <T> *nextValue = curr->next;

        if (curr->data < value) {
            if (before == NULL) {
                before = new LinkedListNode <T> ();
                before->data = curr->data;
                beforeTail = before;
            } else {
                LinkedListNode <T> *newNode = new LinkedListNode <T> ();
                newNode->data = curr->data;
                beforeTail->next = newNode;
                beforeTail = newNode;
            }
        } else {
            if (after == NULL) {
                after = new LinkedListNode <T> ();
                after->data = curr->data;
                tail = after;
            } else {
                LinkedListNode <T> *newNode = new LinkedListNode <T> ();
                newNode->data = curr->data;
                tail->next = newNode;
                tail = newNode;
            }
        }

        delete curr;
        curr = nextValue;
    }

    if (beforeTail != NULL) {
        head = before;
        beforeTail->next = after;
    } else {
        head = after;
    }
}

template <class T>
void LinkedList <T>::addList(LinkedList <T> &toAdd, LinkedList <T> &result) {
    if (result.getHead() != NULL) {
        result.~LinkedList ();
    }

    int carry = 0;
    LinkedListNode <T> *aux = head, *aux2 = toAdd.getHead ();

    while (aux != NULL && aux2 != NULL) {
        result.insert ((aux->data + aux2->data + carry) % 10);
        carry = (aux->data + aux2->data + carry) / 10;
        aux = aux->next;
        aux2 = aux2->next;
    }

    while (aux != NULL) {
        result.insert ((aux->data + carry) % 10);
        carry = (aux->data + carry) / 10;
        aux = aux->next;
    }

    while (aux2 != NULL) {
        result.insert ((aux2->data + carry) % 10);
        carry = (aux2->data + carry) / 10;
        aux2 = aux2->next;
    }

    if (carry) {
        result.insert (1);
    }
}

template <class T>
bool LinkedList <T>::isPalindrome () {
    std::stack <T> s;
    LinkedListNode <T> *slow, *fast;
    slow = fast = head;

    while (fast != NULL && fast->next != NULL) {
        s.push (slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL) {
        slow = slow->next;
    } else {
        s.pop ();
    }

    while (slow != NULL) {
        if (slow->data != s.top ()) return false;
        s.pop ();
        slow = slow->next;
    }

    return true;
}

template class LinkedList <int>;