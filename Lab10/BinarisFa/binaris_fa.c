//
// Created by Csongor on 5/8/2023.
//

#include "binaris_fa.h"

Node *createNewNode(int newData){
    Node *newItem = (Node *) malloc(sizeof(Node));
    if (!newItem) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->info = newData;
    newItem->left = newItem->right = NULL;
    return newItem;
}

Node *insertLeft(Node *root,int NewData)
{
    root->left = createNewNode(NewData);
    return root->left;
}

Node *insertRight(Node *root,int NewData)
{
    root->right = createNewNode(NewData);
    return root->right;
}

void preorderTraversal(Node *root) {
    if(root==NULL)return;
    printf("%d ",root->info);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}