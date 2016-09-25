//
// Created by radusqrt on 9/25/16.
//

#include <cstddef>
#include "BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode () {
    left = right = NULL;
}

BinaryTreeNode::~BinaryTreeNode () {
    if (left != NULL) {
        left->~BinaryTreeNode ();
        delete left;
    }
    if (right != NULL) {
        right->~BinaryTreeNode ();
        delete right;
    }
}

void createLevelLists (int **lists, BinaryTreeNode *root, int level) {
    lists[level][++ lists[level][0]] = root->data;
    if (root->left != NULL) {
        createLevelLists (lists, root->left, level + 1);
    }
    if (root->right != NULL) {
        createLevelLists (lists, root->right, level + 1);
    }
}
