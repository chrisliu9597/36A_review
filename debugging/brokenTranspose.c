#include <stdio.h>
#include <stdlib.h>
// takes the transpose of a matrix (swapping the rows and columns)


// there is something that is causing a segmentation fault here
// can you find it?
typedef struct matrix_struct{
    int** matrix;
    int numRows, numCols;
} Matrix; // matrix struct

Matrix transpose(Matrix m){ // process of transposing
    Matrix newMat;
    newMat.numRows = m.numCols;
    newMat.numCols = m.numRows;
    newMat.matrix = (int**)malloc(newMat.numRows * sizeof(int*));
    for (int i = 0; i < newMat.numRows; i++){
        newMat.matrix[i] = (int*)malloc(newMat.numCols * sizeof(int));
    }

    for (int r = 0; r < newMat.numCols; r++){
        for (int c = 0; c < newMat.numRows; c++){
            newMat.matrix[r][c] = m.matrix[c][r];
        }
    }
    return newMat;
}


int main(){
    Matrix m;
    printf("Number of rows in matrix: ");
    scanf("%d", &(m.numRows));
    printf("Number of columns in matrix: ");
    scanf("%d", &(m.numCols));
    m.matrix = (int**)malloc(m.numRows * sizeof(int*));
    for (int i = 0; i < m.numRows; i++){
        m.matrix[i] = (int*)malloc(m.numCols * sizeof(int));
    }
    printf("Enter your matrix:\n");
    for (int r = 0; r < m.numRows; r++){
        for (int c = 0; c < m.numCols; c++){
            scanf("%d", &m.matrix[c][r]);
        }
    }
    Matrix output = transpose(m);
    printf("The transpose of the matrix you entered is: \n"); // prints the final matrix
    for (int r = 0; r < output.numRows; r++){
        for (int c = 0; c <= output.numCols; c++){
            printf("%d ", output.matrix[r][c]);
        }
        printf("\n");
    }

    for (int i = 0; i < m.numRows; i++){
        free(m.matrix[i]);
    } // make sure to avoid memory leaks
    free(m.matrix);
    return 0;
}