//
// Created by radusqrt on 10/5/16.
//

#ifndef CTCI_6TH_EDITION_LISTS_H
#define CTCI_6TH_EDITION_LISTS_H

#include <vector>
#include "../Trees and Graphs/BinaryTreeNode.h"

void WeaveLists(std::vector <int> first, std::vector <int> second,
    std::vector <std::vector <int>> &results, std::vector <int> prefix) {
    if (first.empty() || second.empty()) {
        std::vector <int> result = prefix;
        result.insert(result.end(), first.begin(), first.end());
        result.insert(result.end(), second.begin(), second.end());
        results.push_back(result);
        return;
    }

    int headFirst = first[0];
    prefix.push_back(headFirst);
    first.erase(first.begin(), first.begin() + 1);
    WeaveLists(first, second, results, prefix);
    first.insert(first.begin(), headFirst);
    prefix.erase(prefix.begin() + prefix.size() - 1, prefix.end());

    int headSecond = second[0];
    prefix.push_back(headSecond);
    second.erase(second.begin(), second.begin() + 1);
    WeaveLists(first, second, results, prefix);
    second.insert(second.begin(), headFirst);
    prefix.erase(prefix.begin() + prefix.size() - 1, prefix.end());
}

std::vector <std::vector <int>> AllSequences(BinaryTreeNode *node) {
    std::vector <std::vector <int>> result;

    if (node == NULL) {
        result.push_back(std::vector <int> ());
        return result;
    }

    std::vector <int> prefix;
    prefix.push_back(node->data);

    //Recurse on left and right subtrees
    std::vector<std::vector <int>> leftSeq = AllSequences(node->left);
    std::vector<std::vector <int>> rightSeq = AllSequences(node->right);

    for (auto left : leftSeq) {
        for (auto right : rightSeq) {
            std::vector <std::vector <int>> weaved;
            WeaveLists(left, right, weaved, prefix);
            result.insert(result.end(), weaved.begin(), weaved.end());
        }
    }

    return result;
}

#endif //CTCI_6TH_EDITION_LISTS_H

