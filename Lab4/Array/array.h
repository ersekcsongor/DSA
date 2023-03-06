//
// Created by Csongor on 3/6/2023.
//

#ifndef GITHUB_DSA_ARRAY_H
#define GITHUB_DSA_ARRAY_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int capacity;
    int size;
    int *elements;
}IntArray;
void createIntArray(int capacity, IntArray* pArray);
void printArray(IntArray array);
bool isFull(IntArray array);
bool isEmpty(IntArray array);
int getItemAt(IntArray array, int position);
#endif //GITHUB_DSA_ARRAY_H
