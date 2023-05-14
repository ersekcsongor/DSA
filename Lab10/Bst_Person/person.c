//
// Created by Csongor on 5/10/2023.
//

#include "person.h"

node *create_node(char name[], char gender[], char birthdate[]) {
    node *new_node = (node*) malloc(sizeof(node));
    strcpy(new_node->name, name);
    strcpy(new_node->gender, gender);
    strcpy(new_node->birthdate, birthdate);
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node *insert_node(node *root, node *new_node) {
    if (root == NULL) {
        return new_node;
    }
    if (strcmp(new_node->name, root->name) < 0) {
        root->left = insert_node(root->left, new_node);
    } else {
        root->right = insert_node(root->right, new_node);
    }
    return root;
}

void inorder_traversal(node *root) {
    if (root == NULL) {
        return;
    }
    inorder_traversal(root->left);
    printf("%s (%s, %s)\n", root->name, root->gender, root->birthdate);
    inorder_traversal(root->right);
}


