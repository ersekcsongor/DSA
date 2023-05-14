//
// Created by Csongor on 5/10/2023.
//

#include "person.h"

Node *createNewNode(char newData[]) {
    Node *newItem = NULL;
    newItem = (Node*) malloc(sizeof(Node));
    if(!newItem){
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->right = newItem->left = NULL;
    strcpy(newItem->info,newData);
    return newItem;
}

Node *insert(Node *node, char key[]){
    if(node == NULL)
    {
        return createNewNode(key);
    }
    if(strcmp(node->info,key)==1)
    {
        node->left = insert(node->left,key);
    }
    else if(strcmp(node->info,key)== -1)
    {
        node->right = insert(node->right,key);
    }
    return node;

}

