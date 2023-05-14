//
// Created by Csongor on 5/8/2023.
//

#include "binary_search_tree.h"
Node *createNewNode(int newData){
    Node *newItem = (Node *) malloc(sizeof(Node));
    if (!newItem) {
        printf("MEMORY ALLOCATION ERROR MESSAGE! \n");
        exit(-1);
    }
    newItem->info = newData;
    newItem->left = newItem->right = NULL;
    return newItem;
}

Node * insert(Node *node, int key)
{
    if(node == NULL)
    {
        return createNewNode(key);
    }
    if(key <= node->info)
    {
        node->left = insert(node->left,key);
    }
    else if(key > node->info)
    {
        node->right = insert(node->right,key);
    }
    return node;
}

void inorderTraversal(Node *root){
    if(root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ",root->info);
    inorderTraversal(root->right);
}

 Node *minValueNode(struct Node *node) {
     struct Node *current = node;

     while (current && current->left != NULL) {
         current = current->left;
     }
     return current;
 }
Node * maxValueNode(Node *node){
    Node *current = node;
    while (current && current->right)
    {
        current = current->right;
    }
    return current;
}

Node *deleteNode(Node *root, int key) {
    if (root == NULL) {
        return root;
    }
    if (key < root->info) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->info) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        root->info = temp->info;
        root->right = deleteNode(root->right, temp->info);
    }
    return root;
}
