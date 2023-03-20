//
// Created by Csongor on 4/24/2023.
//

#ifndef NODE_NODE_H
#define NODE_NODE_H
typedef struct Node{
    int data;
    struct Node* next;
}Node;
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "constants.h"
#include <string.h>
bool isEmpty(Node *head);
Node *newNode(int new_data);
/**
* Insert new node at the beginning of the list
* @param head_ref
* @param new_data
*/
void insertAtBeginning(Node** head_ref, int new_data);
/**
* Insert new node after a specific node
* @param prev_ref
* @param new_data
*/
void insertAfter(Node* prev_ref, int new_data);
/**
* Insertg new node at the end of the list
* @param head_ref
* @param new_data
*/
void insertAtEnd(Node** head_ref, int new_data);
/**
* Delete the first node
* @param head_ref
*/
void deleteFromBeginning(Node** head_ref);
/**
* Delete the last node
* @param head_ref
*/
void deleteFromEnd(Node** head_ref);
/**
* Delete a specific node
* @param head_ref
* @param key
*/
void deleteNode(Node** head_ref, int key);
/**
* Searches for a specific node with value key
* @param head_ref
* @param key
* @return
*/
bool searchNode(Node* head_ref, int key);
/**
* Sort the values present in the list in ascending order
* @param head_ref
*/
void printList(Node* node);
void sortLinkedList(Node* head_ref);
void freeList(Node **head);
#endif //NODE_NODE_H