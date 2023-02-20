//
// Created by Csongor on 2/20/2023.
//

#include "functions.h"
int numberOfEvenNumbers(int n, int *pArray){
    int paros = 0;
    for (int i = 0; i < n; ++i) {
        if(pArray[i] % 2 == 0)
        {
            paros++;
        }
    }
    return paros;
}
void beolvasas(int n,int *a){
    for (int i = 0; i < n; ++i) {
        a[i] = (rand()%(10-1+1))+1;
        printf("%i ",&a[i]);
    }
}
void kiiras(int n,int *a){
    for (int i = 0; i < n; ++i) {
    }
}