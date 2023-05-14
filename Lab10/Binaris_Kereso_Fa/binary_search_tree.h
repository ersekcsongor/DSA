//
// Created by Csongor on 5/8/2023.
//

#ifndef BINARIS_KERESO_FA_BINARY_SEARCH_TREE_H
#define BINARIS_KERESO_FA_BINARY_SEARCH_TREE_H
#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
typedef struct Node{
    int info;
    struct Node *left, *right;
}Node;
//create a node
Node * createNewNode(int newData);
//insert a node
Node * insert(Node *node, int key);
//inorder traversal
void inorderTraversal(Node *root);
//find the min number
Node * minValueNode(Node *node);
//find the max number
Node * maxValueNode(Node *node);
//deleting a node
Node *deleteNode(Node *root, int key);
#endif //BINARIS_KERESO_FA_BINARY_SEARCH_TREE_H
