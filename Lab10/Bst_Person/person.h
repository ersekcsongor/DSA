
//
// Created by Csongor on 5/10/2023.
//

#ifndef BST_PERSON_PERSON_H
#define BST_PERSON_PERSON_H
#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
#include <string.h>
typedef struct Node{
    char info[50];
    struct Node *left, *right;
}Node;
//create a node
Node * createNewNode(char newData[50]);
//insert a node
Node * insert(Node *node, char key[50]);
//inorder traversal
void inorderTraversal(Node *root);
//find the min number
Node * minValueNode(Node *node);
//find the max number
3
Node * maxValueNode(Node *node);
//deleting a node
Node *deleteNode(Node *root, int key);

#endif //BST_PERSON_PERSON_H
