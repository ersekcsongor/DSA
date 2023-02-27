#include "functions.h"

int main() {
    FILE *fin = fopen("allomany.txt","r");
    FILE *fout = fopen("allomany2.txt","w");
    int n,m,**a;
    int* maxValues = (int*)malloc(m * sizeof(int));
    fscanf(fin,"%i%i",&n,&m);
    readMatrix(&n,&m,&a,fin);
    /*printf("%i\n", maximumValueOfColumn(n,1,a));
    maxValues =  columnMaximums(n,m,a);
    for (int i = 0; i < m; ++i) {
        printf("%i ",maxValues[i]);
    }
    printf("\n%i \n", maximumValueOfMatrix(n,m,a));
    printf("%i", sumOfMatrixElements(n,m,a));*/
    writeMatrix(n,m,a,"CON");
    negpoz(n,m,a);
    writeMatrix(n,m,a,"CON");
    fclose(fin);
    fclose(fout);
    return 0;

}
