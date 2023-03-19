//
// Created by Csongor on 3/13/2023.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#define CAR_PLATE_NUMBER_LIMIT 10

typedef struct {
    int capacity;
    int front;
    int rear;
    char **elements;
}Queue;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
void createQueue(int capacity, Queue *queue);
void destroyQueue(Queue* queue);
bool isFull(Queue queue);
bool isEmpty(Queue queue);
void enqueue(Queue *queue, char *item);
char* dequeue(Queue* queue);
void display(Queue queue);
#endif //QUEUE_QUEUE_H
