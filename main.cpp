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
    strcpy (toURLify, "Mr John Smith    ");
    strcpy (strPalindrome, "Tact Coa");
    strcpy (oneAway1, "pale");
    strcpy (oneAway2, "bake");

    Strings::URLify (toURLify, 13);

    std::cout << toURLify << "\n";
    std::cout << Strings::isPalindromePermutation (strPalindrome) << "\n";
    std::cout << Strings::isOneAway (oneAway1, oneAway2) << "\n";

    delete[] oneAway1;
    delete[] oneAway2;
    delete[] strPalindrome;
    delete[] toURLify;
    return 0;
}