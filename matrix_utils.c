
#include <stdio.h>
#include "matrix_utils.h"



void printMatrix(int matrix[ROWS][COLS]){
    for  (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}



void transposeMatrix(int matrix[ROWS][COLS], int transposed[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}