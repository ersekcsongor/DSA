//
// Created by Csongor on 5/8/2023.
//

#ifndef BINARISFA_BINARIS_FA_H
#define BINARISFA_BINARIS_FA_H
#include <stdlib.h>
#include <stdio.h>
#include "constants.h"
typedef struct Node{
    int info;
    struct Node *left, *right;
}Node;
//create a new node1
Node *createNewNode(int newData);
//insert on the left of the node
Node *insertLeft(Node *root, int newData);
//insert on the right of the node
Node *insertRight(Node *root, int newData);
//preorder traversal
void preorderTraversal(Node *root);
//inorder traversal
void inorderTraversal(Node *root);
//postorder traversal
void postorderTraversal(Node *root);
#endif //BINARISFA_BINARIS_FA_H
