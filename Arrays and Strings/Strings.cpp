//
// Created by radusqrt on 9/18/16.
//

#include <cstring>
#include "Strings.h"

void Strings::URLify(char *toURLify, int length) {
    int nSpaces = 0, i;

    for (i = 0; i < length; ++ i) {
        if (toURLify[i] == ' ') {
            nSpaces ++;
        }
    }

    int index = length + 2 * nSpaces;

    for (i = length - 1; i >= 0; -- i) {
        if (toURLify[i] != ' ') {
            toURLify[index - 1] = toURLify[i];
            index --;
        } else {
            toURLify[index - 1] = '0';
            toURLify[index - 2] = '2';
            toURLify[index - 3] = '%';
            index -= 3;
        }
    }
}

bool Strings::isPalindromePermutation(char *s) {
    int *freq = new int[300], i, length = (int) strlen (s), odds = 0;

    for (i = 0; i < length; ++ i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i]]++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            freq[s[i] + 32] ++;
        }
    }

    for (i = 'a'; i <= 'z'; ++ i) {
        if (freq[i] % 2 == 1) {
            odds ++;
        }
    }

    delete[] freq;
    return (odds < 2);
}
