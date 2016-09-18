//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
#include "Strings.h"

int main () {
    char *toURLify = new char[100];
    strcpy (toURLify, "Mr John Smith    ");

    Strings::URLify (toURLify, 13);

    std::cout << toURLify;
    return 0;
}

