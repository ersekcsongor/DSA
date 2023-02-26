//
// Created by Csongor on 2/20/2023.
//

#ifndef FELADATOKMATRIX_FUNCTIONS_H
#define FELADATOKMATRIX_FUNCTIONS_H

#endif //FELADATOKMATRIX_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
int maximumValueOfColumn(int rows, int columnIndex, int **pMatrix);
int* columnMaximums(int rows, int cols, int **pMatrix);
int maximumValueOfMatrix(int rows, int cols, int **pMatrix);
int sumOfMatrixElements(int rows, int cols, int **pMatrix);

