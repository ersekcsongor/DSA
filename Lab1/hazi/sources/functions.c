//
// Created by Csongor on 2/19/2023.
//
#include "../headers/functions.h"
float avg(float number1, float number2){
    return (number1/number2)/2;
}
float maximum(float number1, float number2, float number3){
    if(number1 > number2 && number1 >number3)
    {
        return number1;
    }
    else if(number3 > number1 && number3 >number2)
    {
        return number3;
    }
    else
    {
        return number2;
    }
}
void fillWithRandomNumbers(int n, int *pArray, int start, int end){
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        pArray[i] = rand()%(end - start + 1)+start;
    }
    for (int i = 0; i < n; ++i) {
        printf("%i ",pArray[i]);
    }
    printf("\n");
}
void printArrayInReverseOrder(int n, int *pArray, const char* output){
    for (int i = n - 1; i >= 0; --i) {
        printf("%i ",pArray[i]);
    }
}