//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
//#include "Arrays and Strings/Strings.h"
//#include "Linked Lists/LinkedList.h"
#include "Stacks and Queues/Stack.h"
#include "Stacks and Queues/Queue.h"
#include "Stacks and Queues/StackWithMin.h"
#include "Stacks and Queues/SetOfStacks.h"
#include "Stacks and Queues/MyQueue.h"
#include "Stacks and Queues/AnimalQueue.h"

int main () {
    /* ARRAYS AND STRINGS
     *
    char *toURLify = new char[100];
    char *strPalindrome = new char[100];
    char *oneAway1 = new char[100];
    char *oneAway2 = new char[100];
    char *toCompress = new char[100];
    char *str = new char[100];
    char *subStr = new char[100];
    char *rotate1 = new char[100];
    char *rotate2 = new char[100];
    int i, j;
    int **matrix = new int*[5];
    strcpy (toURLify, "Mr John Smith    ");
    strcpy (strPalindrome, "Tact Coa");
    strcpy (oneAway1, "pale");
    strcpy (oneAway2, "bake");
    strcpy (toCompress, "aaaabccccdd");
    strcpy (str, "anamere");
    strcpy (subStr, "amer");
    strcpy (rotate1, "waterbottle");
    strcpy (rotate2, "ttlewaterbo");

    Strings::URLify (toURLify, 13);
    Strings::compressString (toCompress);

    std::cout << toURLify << "\n";
    std::cout << Strings::isPalindromePermutation (strPalindrome) << "\n";
    std::cout << Strings::isOneAway (oneAway1, oneAway2) << "\n";
    std::cout << toCompress << "\n";

    for (i = 0; i < 5; ++ i) {
        matrix[i] = new int[5];
        for(j = 0; j < 5; ++ j) {
            matrix[i][j] = i * 5 + j;
        }
    }

    Strings::rotateMatrix (matrix, 5);
    Strings::printMatrix (matrix, 5);
    std::cout << "\n";
    Strings::zeroMatrix (matrix, 5);
    Strings::printMatrix (matrix, 5);

    std::cout << Strings::isSubstringOf(subStr, str) << "\n";
    std::cout << Strings::isRotation(rotate1, rotate2) << "\n";

    for (i = 0; i < 5; ++ i) {
        delete[] matrix[i];
    }
    delete[] str;
    delete[] subStr;
    delete[] matrix;
    delete[] toCompress;
    delete[] oneAway1;
    delete[] oneAway2;
    delete[] strPalindrome;
    delete[] toURLify; */

    /* LINKED LISTS
    LinkedList <int> l, toAdd, result;
    int kthToLast;

    l.insert (1);
    l.insert (3);
    l.insert (3);
    l.insert (3);
    l.insert (4);
    l.insert (5);
    l.insert (2);
    l.insert (1);
    l.insert (3);
    l.printList ();

    l.removeDuplicates ();
    l.printList ();

    if (l.kthToLast (2, kthToLast)) {
        std::cout << kthToLast << "\n";
    }

    l.deleteMiddleNode (l.getHead ()->next->next);
    l.printList ();

    l.partition (3);
    l.printList ();

    toAdd.insert (0);
    toAdd.insert (0);
    toAdd.insert (7);
    toAdd.insert (6);

    toAdd.printList ();

    l.addList (toAdd, result);
    result.printList ();

    std::cout << result.isPalindrome () << "\n";

    // Works but has memory leaks and I'm too tired to fix them
    /*
    Node <int> *first = new Node <int> ();
    first->data = 1;
    Node <int> *tail = new Node <int> ();
    tail->data = 2;
    first->next = tail;
    Node <int> *newNode = new Node <int> ();
    newNode->data = 3;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 4;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 5;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 6;
    tail->next = newNode;
    tail = newNode;

    Node <int> *second = new Node <int> ();
    second->data = 7;
    second->next = first->next->next->next->next;

    std::cout << findIntersection (first, second)->data << "\n";

    Node <int> *head = new Node <int> ();
    head->data = 1;
    Node <int> *tail = new Node <int> ();
    tail->data = 2;
    head->next = tail;
    Node <int> *newNode = new Node <int> ();
    newNode->data = 3;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 4;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 5;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 6;
    tail->next = newNode;
    tail = newNode;
    newNode = new Node <int> ();
    newNode->data = 7;
    tail->next = newNode;
    tail = newNode;
    tail->next = head->next->next->next;

    std::cout << findLoop (head)->data << "\n"; */

    /* STACKS AND QUEUES */

    Stack <int> st;
    Queue <int> q;
    StackWithMin minStack;
    SetOfStacks set (3);
    MyQueue q2;
    AnimalQueue aq;
    int i;

    for (i = 0; i < 10; ++ i) {
        st.push (i);
        q.push (i);
    }

    while (!st.empty ()) {
        std::cout << st.pop () << ", ";
    }
    std::cout << "\n";

    while (!q.empty ()) {
        std::cout << q.pop () << ", ";
    }
    std::cout << "\n";

    minStack.push (6);
    minStack.push (7);
    minStack.push (3);
    minStack.push (4);
    minStack.push (2);

    while (!minStack.empty ()) {
        std::cout << minStack.getMin () << ", ";
        minStack.pop ();
    }
    std::cout << "\n";

    set.push (1);
    set.push (2);
    set.push (3);
    set.push (4);
    set.push (5);

    std::cout << set.popAt (0) << ", " << set.popAt (1) << ", ";
    std::cout << set.popAt (0) << "\n";

    q2.push (1);
    q2.push (2);
    q2.push (3);
    q2.push (4);
    std::cout << q2.pop () << ", ";
    std::cout << q2.pop () << ", ";
    q2.push (5);
    while (!q2.empty ()) {
        std:: cout << q2.pop () << ", ";
    }
    std::cout << "\n";

    st.push (1);
    st.push (3);
    st.push (5);
    st.push (2);
    st.push (8);
    st.push (6);

    sortStack (&st);
    while (!st.empty ()) {
        std::cout << st.pop () << ", ";
    }
    std::cout << "\n";

    aq.pushCat ();
    aq.pushCat ();
    aq.pushCat ();
    aq.pushDog ();
    aq.pushCat ();

    std::cout << aq.getDog ();

    return 0;
}