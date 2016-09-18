//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
#include "Arrays and Strings/Strings.h"

int main () {
    char *toURLify = new char[100];
    char *strPalindrome = new char[100];
    char *oneAway1 = new char[100];
    char *oneAway2 = new char[100];
    char *toCompress = new char[100];
    int i, j;
    int **matrix = new int*[5];
    strcpy (toURLify, "Mr John Smith    ");
    strcpy (strPalindrome, "Tact Coa");
    strcpy (oneAway1, "pale");
    strcpy (oneAway2, "bake");
    strcpy (toCompress, "aaaabccccdd");

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

    for (i = 0; i < 5; ++ i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] toCompress;
    delete[] oneAway1;
    delete[] oneAway2;
    delete[] strPalindrome;
    delete[] toURLify;
    return 0;
}