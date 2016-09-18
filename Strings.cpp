//
// Created by radusqrt on 9/18/16.
//

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
