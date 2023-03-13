//
// Created by Csongor on 3/13/2023.
//

#ifndef LAB5_FUNCTIONS_H
#define LAB5_FUNCTIONS_H
typedef struct {
    int capacity;
    int top;
    int *elements;
}Stack;

typedef struct {
    int capacity;
    int front;
    int rear;
    int *elements;
}Queue;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void createStack(int capacity, Stack *stack);
void destroyStack(Stack* stack);
bool isEmpty(Stack stack);
bool isFull(Stack stack);
void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack stack);
int size(Stack stack);
#endif //LAB5_FUNCTIONS_H
