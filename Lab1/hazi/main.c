#include "headers/functions.h"
int main() {
    int a[10];
    printf("%f\n",avg(1.9,2.3));
    printf("%f\n",maximum(2.6,1.8,1.9));
    fillWithRandomNumbers(10,a,2,9);
    printArrayInReverseOrder(10,a,"CON");
    return 0;
}
