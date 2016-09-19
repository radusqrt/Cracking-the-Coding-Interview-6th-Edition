//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
#include "Arrays and Strings/Strings.h"
#include "Linked Lists/LinkedList.h"

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

    /* LINKED LISTS */
    LinkedList <int> l;
    int kthToLast;

    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.insert(2);
    l.insert(1);
    l.insert(3);
    l.printList();

    l.removeDuplicates();
    l.printList();

    if (l.kthToLast (5, kthToLast)) {
        std::cout << kthToLast << "\n";
    }

    l.deleteMiddleNode(l.getHead()->next->next);
    l.printList();

    return 0;
}