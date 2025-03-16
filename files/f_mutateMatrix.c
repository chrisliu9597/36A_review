#include <stdio.h>
#include <stdlib.h>

#define SCREAM(a) printf("%d ", a) // fun little macro

// multplies each value of the matrix by m and adds n to it
void mutateMatrix(int** matrix, int rows, int cols, int m, int n){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = matrix[i][j] * m + n;
        }
    }

}

// prints the matrix
void printMatrix(int** matrix, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            SCREAM(matrix[i][j]);
        }
        printf("\n");
    }

}



