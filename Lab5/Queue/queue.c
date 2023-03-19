//
// Created by Csongor on 3/13/2023.
//

#include "queue.h"
#include "constants.h"

bool isFull(Queue queue) {
    return queue.rear == queue.capacity - 1;
}

bool isEmpty(Queue queue) {
    return queue.front == -1 && queue.rear == -1;
}

void createQueue(int capacity, Queue *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    for (int i = 0; i < queue->capacity; ++i) {
    queue->elements[i] = (char *) calloc(CAR_PLATE_NUMBER_LIMIT,sizeof(char));
    if(!queue->elements[i]){
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
        }
    }
}

void destroyQueue(Queue *queue) {
    free(queue->elements);
    queue->front = queue->rear = -1;
    queue->capacity = 0;
    queue = NULL;
}

void enqueue(Queue *queue, char *item) {
    if (isFull(*queue)) {
        printf(FULL_MESSAGE);
        return;
    }
    if(queue->front == -1)
    {
        queue->front = queue->rear = 0;
    }
    else
    {
        queue->rear++;
    }
    strcpy(queue->elements[queue->rear],item);
}

char* dequeue(Queue *queue) {
    if(isEmpty(*queue))
    {
        printf(EMPTY_MESSAGE);
        return EMPTY_MESSAGE;
    }
    //ha csak egy elem van
    if(queue->front == queue->rear)
    {
        int poz = queue->front;
        queue->front = queue->rear = -1;
        return queue->elements[poz];
    }
    return queue->elements[queue->front++];
}

void display(Queue queue) {
    if (isEmpty(queue)) {
        printf(EMPTY_MESSAGE);
        return;
    }
    for (int i = queue.front; i <= queue.rear; ++i) {
        printf("\t-3%s\n" , queue.elements[i]);
    }
    printf("\n");
}