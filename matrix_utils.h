#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#define ROWS 3
#define COLS 3


void printMatrix(int matrix[ROWS][COLS]);
void transposeMatrix(int matrix[ROWS][COLS], int transposed[COLS][ROWS]);
void multiplyMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]);

#endif