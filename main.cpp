//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
//#include "Arrays and Strings/Strings.h"
//#include "Linked Lists/LinkedList.h"
#include "Stacks and Queues/Stack.h"

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

    st.push (5);
    std::cout << st.pop () << "\n";
    if (st.empty ()) {
        std::cout << "E goala, boss!\n";
    }

    return 0;
}