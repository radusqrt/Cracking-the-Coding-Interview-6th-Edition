//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
#include "Arrays and Strings/Strings.h"

int main () {
    char *toURLify = new char[100];
    char *strPalindrome = new char[100];
    strcpy (toURLify, "Mr John Smith    ");
    strcpy (strPalindrome, "Tact Coa");

    Strings::URLify (toURLify, 13);

    std::cout << toURLify << "\n";
    std::cout << Strings::isPalindromePermutation (strPalindrome);

    delete[] strPalindrome;
    delete[] toURLify;
    return 0;
}