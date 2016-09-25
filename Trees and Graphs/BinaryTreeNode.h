//
// Created by radusqrt on 9/25/16.
//

#ifndef CTCI_6TH_EDITION_BINARYTREENODE_H
#define CTCI_6TH_EDITION_BINARYTREENODE_H


struct BinaryTreeNode {
    BinaryTreeNode *left, *right;
    int data;

    BinaryTreeNode ();
    ~BinaryTreeNode ();
};

void createLevelLists (int **lists, BinaryTreeNode *root, int level);

#endif //CTCI_6TH_EDITION_BINARYTREENODE_H
