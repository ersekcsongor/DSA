//
// Created by Csongor on 3/13/2023.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
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
#include <ctype.h>
void createQueue(int capacity, Queue *queue);
void destroyQueue(Queue* queue);
bool isFull(Queue queue);
bool isEmpty(Queue queue);
void enqueue(Queue* queue, int item);
char* dequeue(Queue* queue);
void display(Queue queue);
#endif //QUEUE_QUEUE_H
