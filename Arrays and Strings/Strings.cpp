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
    int freq = 0, i, length = (int) strlen (s), odds = 0;

    for (i = 0; i < length; ++ i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }

        if (s[i] >= 'a' && s[i] <= 'z') {
            freq ^= (1 << s[i] - 'a');
        }
    }

    while (freq) {
        odds ++;
        freq &= (freq - 1);
    }

    return (odds < 2);
}

bool Strings::isOneAway(char *s1, char *s2) {
    int l1, l2, i, length;
    char *big, *small;
    l1 = (int) strlen (s1);
    l2 = (int) strlen (s2);

    if (l1 - l2 > 1 || l2 - l1 > 1) return false;

    // Replace
    if (l1 == l2) {
        for (i = 0; i < l1; ++ i) {
            if (s1[i] != s2[i]) return strcmp (s1 + i + 1, s2 + i + 1) == 0;
        }

        return true;
    }

    // Insert or remove
    if (l1 == l2 + 1) {
        big = s1;
        small = s2;
        length = l2;
    } else {
        big = s2;
        small = s1;
        length = l1;
    }

    for (i = 0; i < length; ++ i) {
        if (small[i] != big[i]) {
            return strcmp (small + i, big + i + 1) == 0;
        }
    }

    return true;
}
