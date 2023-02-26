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
        if(!(*dpMatrix)[i])
        {
            printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
            exit(MEMORY_ALLOCATION_ERROR);
        }
    }

}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input){
    allocateMemoryForMatrix2(*pRows,*pCols,dpArray);
    for (int i = 0; i < *pRows; ++i) {
        for (int j = 0; j < *pCols; ++j) {
            scanf("%i",&(*dpArray)[i][j]);
        }
    }
}
int maximumValueOfColumn(int rows, int columnIndex, int **pMatrix)
{
    int max = pMatrix[0][columnIndex];
    for (int i = 1; i < rows; ++i) {
        if(pMatrix[i][columnIndex] > max){
            max = pMatrix[i][columnIndex];
        }
    }
    return max;
}

int* columnMaximums(int rows, int cols, int **pMatrix){
    int* maxValues = (int*)malloc(cols * sizeof(int));
    int max = pMatrix[0][0];
    for (int i = 0; i < cols; ++i) {
        max = pMatrix[0][i];
        for (int j = 0; j < rows; ++j) {
            if(pMatrix[j][i] > max)
                max = pMatrix[j][i];
        }
        maxValues[i] = max;
    }
    return maxValues;
}

int maximumValueOfMatrix(int rows, int cols, int **pMatrix){
    int max = pMatrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if(pMatrix[i][j] > max)
            {
                max = pMatrix[i][j];
            }
        }
    }
    return max;
}

int sumOfMatrixElements(int rows, int cols, int **pMatrix){
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += pMatrix[i][j];
        }
    }
    return sum;
}