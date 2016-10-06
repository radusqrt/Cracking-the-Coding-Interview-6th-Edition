//
// Created by radusqrt on 10/6/16.
//

#ifndef CTCI_6TH_EDITION_RANDOMTREE_H
#define CTCI_6TH_EDITION_RANDOMTREE_H


#include <cstddef>
#include <time.h>
#include <stdlib.h>
#include <random>
#include <iostream>

class RandomBinaryTree {
    int data, size;
    RandomBinaryTree *left, *right;

public:
    RandomBinaryTree(int data) {
        this->data = data;
        size = 1;
        left = right = NULL;
    }

    int getSize() {
        return size;
    }

    int getData() {
        return data;
    }

    RandomBinaryTree* getRandomNode() {
        std::default_random_engine generator;
        std::uniform_int_distribution <int> distribution(1, size - 1);
        int rnd = distribution(generator);
        std::cout << size << " " << rnd << "\n";
        int leftSize = (left == NULL) ? 0 : left->getSize();

        if (rnd < leftSize) {
            return left->getRandomNode();
        } else if (rnd == leftSize) {
            return this;
        } else {
            return right->getRandomNode();
        }
    }

    void insert(int data) {
        size ++;

        if (data <= this->data) {
            if (left == NULL) {
                left = new RandomBinaryTree(data);
            } else {
                left->insert(data);
            }
        } else {
            if (right == NULL) {
                right = new RandomBinaryTree(data);
            } else {
                right->insert(data);
            }
        }
    }
};


#endif //CTCI_6TH_EDITION_RANDOMTREE_H
