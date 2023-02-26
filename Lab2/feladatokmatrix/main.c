#include "functions.h"

int main() {
    int n,m,**a;
    int* maxValues = (int*)malloc(m * sizeof(int));
    scanf("%i%i",&n,&m);
    readMatrix(&n,&m,&a,"CON");
    printf("%i\n", maximumValueOfColumn(n,1,a));
    maxValues =  columnMaximums(n,m,a);
    for (int i = 0; i < m; ++i) {
        printf("%i ",maxValues[i]);
    }
    printf("\n%i \n", maximumValueOfMatrix(n,m,a));
    printf("%i", sumOfMatrixElements(n,m,a));
    return 0;
}
