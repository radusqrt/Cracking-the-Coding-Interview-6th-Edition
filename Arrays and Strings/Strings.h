//
// Created by radusqrt on 9/18/16.
//

#ifndef CTCI_6TH_EDITION_STRINGS_H
#define CTCI_6TH_EDITION_STRINGS_H


class Strings {

public:
    static void URLify (char *toURLify, int length);
    static bool isPalindromePermutation (char *s);
    static bool isOneAway (char *s1, char *s2);
    static void compressString (char *toCompress);
    static void rotateMatrix (int **matrix, int N);
    static void zeroMatrix (int **matrix, int N);
    static void printMatrix (int **matrix, int N);
};


#endif //CTCI_6TH_EDITION_STRINGS_H
