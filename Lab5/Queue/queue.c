//
// Created by Csongor on 3/13/2023.
//

#include "queue.h"
#include "constants.h"

bool isFull(Queue queue) {
    return queue.rear == queue.capacity - 1;
}

bool isEmpty(Queue queue) {
    return queue.front == -1;
}

void createQueue(int capacity, Queue *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (int *) calloc(queue->capacity,sizeof(int));
}

void destroyQueue(Queue *queue) {
    free(queue->elements);
    queue->front = queue->rear = -1;
    queue->capacity = 0;
    queue = NULL;
}

void enqueue(Queue *queue, int item) {
    if (isFull(*queue)) {
        printf(FULL_MESSAGE);
        return;
    }
    if (isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->elements[++queue->rear]=item);
}

int dequeue(Queue *queue) {
    if (isEmpty(*queue)) {
        printf(EMPTY_MESSAGE);
        return NULL;
    }
    int pos = queue->front;
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front++;
    }
    return queue->elements[pos];
}

void display(Queue queue) {
    if (isEmpty(queue)) {
        printf("The queue is ");
        printf(EMPTY_MESSAGE);
        return;
    }
    for (int i = queue.front; i <= queue.rear; ++i) {
        printf("%i\n"
                , queue.elements[i]);
    }
}