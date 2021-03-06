//
// Created by radusqrt on 9/18/16.
//

#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
//#include "Arrays and Strings/Strings.h"
//#include "Linked Lists/LinkedList.h"
//#include "Stacks and Queues/Stack.h"
//#include "Stacks and Queues/Queue.h"
//#include "Stacks and Queues/StackWithMin.h"
//#include "Stacks and Queues/SetOfStacks.h"
//#include "Stacks and Queues/MyQueue.h"
//#include "Stacks and Queues/AnimalQueue.h"
//#include "Trees and Graphs/BinaryTreeNode.h"
//#include "Utils/Lists.h"
//#include "Trees and Graphs/RandomBinaryTree.h"

int main () {
    /* ARRAYS AND STRINGS
     *
    char *toURLify = new char[100];
    char *strPalindrome = new char[100];
    char *oneAway1 = new char[100];
    char *oneAway2 = new char[100];
    char *toCompress = new char[100];
    char *str = new char[100];
    char *subStr = new char[100];
    char *rotate1 = new char[100];
    char *rotate2 = new char[100];
    int i, j;
    int **matrix = new int*[5];
    strcpy (toURLify, "Mr John Smith    ");
    strcpy (strPalindrome, "Tact Coa");
    strcpy (oneAway1, "pale");
    strcpy (oneAway2, "bake");
    strcpy (toCompress, "aaaabccccdd");
    strcpy (str, "anamere");
    strcpy (subStr, "amer");
    strcpy (rotate1, "waterbottle");
    strcpy (rotate2, "ttlewaterbo");

    Strings::URLify (toURLify, 13);
    Strings::compressString (toCompress);

    std::cout << toURLify << "\n";
    std::cout << Strings::isPalindromePermutation (strPalindrome) << "\n";
    std::cout << Strings::isOneAway (oneAway1, oneAway2) << "\n";
    std::cout << toCompress << "\n";

    for (i = 0; i < 5; ++ i) {
        matrix[i] = new int[5];
        for(j = 0; j < 5; ++ j) {
            matrix[i][j] = i * 5 + j;
        }
    }

    Strings::rotateMatrix (matrix, 5);
    Strings::printMatrix (matrix, 5);
    std::cout << "\n";
    Strings::zeroMatrix (matrix, 5);
    Strings::printMatrix (matrix, 5);

    std::cout << Strings::isSubstringOf(subStr, str) << "\n";
    std::cout << Strings::isRotation(rotate1, rotate2) << "\n";

    for (i = 0; i < 5; ++ i) {
        delete[] matrix[i];
    }
    delete[] str;
    delete[] subStr;
    delete[] matrix;
    delete[] toCompress;
    delete[] oneAway1;
    delete[] oneAway2;
    delete[] strPalindrome;
    delete[] toURLify; */

    /* LINKED LISTS
    LinkedList <int> l, toAdd, result;
    int kthToLast;

    l.insert (1);
    l.insert (3);
    l.insert (3);
    l.insert (3);
    l.insert (4);
    l.insert (5);
    l.insert (2);
    l.insert (1);
    l.insert (3);
    l.printList ();

    l.removeDuplicates ();
    l.printList ();

    if (l.kthToLast (2, kthToLast)) {
        std::cout << kthToLast << "\n";
    }

    l.deleteMiddleNode (l.getHead ()->next->next);
    l.printList ();

    l.partition (3);
    l.printList ();

    toAdd.insert (0);
    toAdd.insert (0);
    toAdd.insert (7);
    toAdd.insert (6);

    toAdd.printList ();

    l.addList (toAdd, result);
    result.printList ();

    std::cout << result.isPalindrome () << "\n";

    // Works but has memory leaks and I'm too tired to fix them
    /*
    LinkedListNode <int> *first = new LinkedListNode <int> ();
    first->data = 1;
    LinkedListNode <int> *tail = new LinkedListNode <int> ();
    tail->data = 2;
    first->next = tail;
    LinkedListNode <int> *newNode = new LinkedListNode <int> ();
    newNode->data = 3;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 4;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 5;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 6;
    tail->next = newNode;
    tail = newNode;

    LinkedListNode <int> *second = new LinkedListNode <int> ();
    second->data = 7;
    second->next = first->next->next->next->next;

    std::cout << findIntersection (first, second)->data << "\n";

    LinkedListNode <int> *head = new LinkedListNode <int> ();
    head->data = 1;
    LinkedListNode <int> *tail = new LinkedListNode <int> ();
    tail->data = 2;
    head->next = tail;
    LinkedListNode <int> *newNode = new LinkedListNode <int> ();
    newNode->data = 3;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 4;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 5;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 6;
    tail->next = newNode;
    tail = newNode;
    newNode = new LinkedListNode <int> ();
    newNode->data = 7;
    tail->next = newNode;
    tail = newNode;
    tail->next = head->next->next->next;

    std::cout << findLoop (head)->data << "\n"; */

    /* STACKS AND QUEUES

    Stack <int> st;
    Queue <int> q;
    StackWithMin minStack;
    SetOfStacks set (3);
    MyQueue q2;
    AnimalQueue aq;
    int i;

    for (i = 0; i < 10; ++ i) {
        st.push (i);
        q.push (i);
    }

    while (!st.empty ()) {
        std::cout << st.pop () << ", ";
    }
    std::cout << "\n";

    while (!q.empty ()) {
        std::cout << q.pop () << ", ";
    }
    std::cout << "\n";

    minStack.push (6);
    minStack.push (7);
    minStack.push (3);
    minStack.push (4);
    minStack.push (2);

    while (!minStack.empty ()) {
        std::cout << minStack.getMin () << ", ";
        minStack.pop ();
    }
    std::cout << "\n";

    set.push (1);
    set.push (2);
    set.push (3);
    set.push (4);
    set.push (5);

    std::cout << set.popAt (0) << ", " << set.popAt (1) << ", ";
    std::cout << set.popAt (0) << "\n";

    q2.push (1);
    q2.push (2);
    q2.push (3);
    q2.push (4);
    std::cout << q2.pop () << ", ";
    std::cout << q2.pop () << ", ";
    q2.push (5);
    while (!q2.empty ()) {
        std:: cout << q2.pop () << ", ";
    }
    std::cout << "\n";

    st.push (1);
    st.push (3);
    st.push (5);
    st.push (2);
    st.push (8);
    st.push (6);

    sortStack (&st);
    while (!st.empty ()) {
        std::cout << st.pop () << ", ";
    }
    std::cout << "\n";

    aq.pushCat ();
    aq.pushCat ();
    aq.pushCat ();
    aq.pushDog ();
    aq.pushCat ();

    std::cout << aq.getDog (); */

    /* TREES AND GRAPHS

    int **lists, i;
    BinaryTreeNode *root = new BinaryTreeNode ();

    lists = new int*[4];
    for (i = 0; i < 4; ++ i) {
        lists[i] = new int[(int) pow (2, i) + 1];
    }

    root->data = 1;
    BinaryTreeNode *aux = new BinaryTreeNode ();
    aux->data = 2;
    root->left = aux;
    aux = new BinaryTreeNode ();
    aux->data = 3;
    root->right = aux;
    aux = new BinaryTreeNode ();
    aux->data = 4;
    root->left->left = aux;
    aux = new BinaryTreeNode ();
    aux->data = 5;
    root->left->right = aux;
    aux = new BinaryTreeNode ();
    aux->data = 6;
    root->right->left = aux;
    aux = new BinaryTreeNode ();
    aux->data = 7;
    root->right->right = aux;
    aux = new BinaryTreeNode ();
    aux->data = 8;
    root->right->left->left = aux;
    aux = new BinaryTreeNode ();
    aux->data = 9;
    root->right->left->right = aux;

    createLevelLists (lists, root, 0);
    for (i = 0; i < 4; ++ i) {
        int j;

        for (j = 1; j <= lists[i][0]; ++ j) {
            std::cout << lists[i][j] << " ";
        }
        delete lists[i];
        std::cout << "\n";
    }
    delete lists;

    root->data = 5;
    aux = new BinaryTreeNode ();
    aux->data = 2;
    root->left = aux;
    aux = new BinaryTreeNode ();
    aux->data = 7;
    root->right = aux;
    aux = new BinaryTreeNode ();
    aux->data = 3;
    root->left->right = aux;
    root->left->right->left = root->left->right->right = NULL;
    root->left->left = NULL;
    aux = new BinaryTreeNode ();
    aux->data = 6;
    root->right->left = aux;
    root->right->left->left = root->right->left->right = NULL;
    aux = new BinaryTreeNode ();
    aux->data = 8;
    root->right->right = aux;
    root->right->right->left = root->right->right->right = NULL;

    std::vector <std::vector <int>> results = AllSequences(root);
    std::vector <int> first = {2, 3}, second = {1}, prefix;
    std::vector <std::vector <int>> results;
    WeaveLists(first, second, results, prefix);

    std::cout << "Weave\n";

    for (i = 0; i < results.size(); ++ i) {
        for (int j = 0; j < results[i].size(); ++ j) {
            std::cout << results[i][j] << " ";
        }
        std::cout << "\n";
    }

    RandomBinaryTree *rnd_root = new RandomBinaryTree(5);
    rnd_root->insert(4);
    rnd_root->insert(7);
    rnd_root->insert(6);
    rnd_root->insert(9);
    rnd_root->insert(3);
    rnd_root->insert(1);

    std::cout << rnd_root->getRandomNode()->getData(); */

    int n, m, i, j;
    n = 1024;
    m = 19;
    j = 2;
    i = 6;

    int mask = ~(1 << (i - j + 2) - 1);
    n &= (mask << j);
    n |= (m << j);

    std::cout << n << "\n";

    n = 1775;
    int last = 0, curr = 0, maxi = 0;
    while (n) {
        if (1 & n) {
            curr ++;
        } else {
            if (curr + last > maxi) {
                maxi = curr + last;
            }
            last = curr;
            curr = 0;
        }
        n >>= 1;
    }

    std::cout << maxi + 1 << "\n";
    return 0;
}