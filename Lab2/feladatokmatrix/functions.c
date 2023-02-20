//
// Created by Csongor on 2/20/2023.
//

#include "functions.h"
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix){
    *dpMatrix = (int**) calloc(rows,sizeof (int*));
    if(!*dpMatrix)
    {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR);
    }

    for (int i = 0; i < rows; ++i) {
        (*dpMatrix)[i] = (int*) calloc(cols,sizeof(int));
        if(!*dpMatrix[i])
        {
            printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
            exit(MEMORY_ALLOCATION_ERROR);
        }
    }

}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input){
    allocateMemoryForMatrix2(pRows,pCols,dpArray);
    for (int i = 0; i < pRows; ++i) {
        for (int j = 0; j < pCols; ++j) {
            scanf("%i",dpArray[i][j]);
        }
    }
}