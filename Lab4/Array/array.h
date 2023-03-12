//
// Created by Csongor on 3/6/2023.
//

#ifndef GITHUB_DSA_ARRAY_H
#define GITHUB_DSA_ARRAY_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
typedef struct {
    int capacity;
    int size;
    int *elements;
}IntArray;
void createIntArray(int capacity, IntArray* pArray);
void printArray(IntArray array);
bool isFull(IntArray array);
bool isEmpty(IntArray array);
void insertAt(IntArray* pArray, int position, int item);
void insertFirst(IntArray* pArray, int item);
void insertLast(IntArray* pArray, int item);
int getItemAt(IntArray array, int position);
void deleteItemAt(IntArray* pArray, int position);
int search(IntArray pArray, int item);
bool update(IntArray* pArray, int position, int newItem);
void deallocateIntArray(IntArray *pArray);
#endif //GITHUB_DSA_ARRAY_H
