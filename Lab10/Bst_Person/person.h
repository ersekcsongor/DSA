
//
// Created by Csongor on 5/10/2023.
//

#ifndef BST_PERSON_PERSON_H
#define BST_PERSON_PERSON_H
#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
#include <string.h>
typedef struct node {
    char name[50];
    char gender[10];
    char birthdate[20];
    struct node *left;
    struct node *right;
} node;

enum gender{MALE,FEMALE,OTHER};

node *create_node(char name[], char gender[], char birthdate[]);

node *insert_node(node *root, node *new_node);

void inorder_traversal(node *root);
#endif //BST_PERSON_PERSON_H
