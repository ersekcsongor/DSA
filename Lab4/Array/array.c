//
// Created by Csongor on 3/6/2023.
//

#include "array.h"
#include "constants.h"

void createIntArray(int capacity, IntArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements = (int *) calloc(capacity, sizeof(int));
    if (!pArray->elements) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void printArray(IntArray array) {
    if (array.capacity == 0) {
        printf("ures tomb\n");
    } else {
        for (int i = 0; i < array.capacity; ++i) {
            printf("%i ", array.elements[i]);
        }
    }
}

bool isFull(IntArray array) {
    if (array.size == array.capacity) { return true; }
    else { return false; }
}

bool isEmpty(IntArray array) {
    if (array.size == 0) {
        return true;
    } else {
        return false;
    }
}

int getItemAt(IntArray array, int position){
    if(position > array.capacity)
    {
        printf("%s",INVALID_POSITION);
        return ;
    } else{

    }
}
