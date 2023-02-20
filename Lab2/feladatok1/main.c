#include "functions.h"
int main() {
    int n;
    srand(time(0));
    scanf("%i",&n);
    int *a = (int*) malloc(n*sizeof(int));
    beolvasas(n,a);
    kiiras(n,a);
    printf("%i",numberOfEvenNumbers(n,a));
    return 0;
}
