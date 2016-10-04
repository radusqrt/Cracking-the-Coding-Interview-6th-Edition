//
// Created by radusqrt on 9/25/16.
//

#ifndef CTCI_6TH_EDITION_BINARYTREENODE_H
#define CTCI_6TH_EDITION_BINARYTREENODE_H


#include <map>

struct BinaryTreeNode {
    static std::map <BinaryTreeNode *, int> heights;
    BinaryTreeNode *left, *right;
    int data;

    BinaryTreeNode ();
    ~BinaryTreeNode ();
};

void createLevelLists (int **lists, BinaryTreeNode *root, int level);
bool isBalanced (BinaryTreeNode *root);
int getHeight (BinaryTreeNode *root);

#endif //CTCI_6TH_EDITION_BINARYTREENODE_H
