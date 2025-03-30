#include <stdio.h>
#include "matrix_utils.h"

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transposed[COLS][ROWS];

    transposeMatrix(matrix, transposed);

    printf("Orijinal Matris:\n");
    printMatrix(matrix);
    
    printf("Transpoz Matris:\n");
    printMatrix(transposed);

    return 0;
    
}

