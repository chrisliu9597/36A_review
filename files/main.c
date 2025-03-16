// mutate matrix:
// inputs: m, n
// multiplies each entry by n and adds m to it 
// newMat[i][j] = m * mat[i][j] + n
#include <stdlib.h>
#include <stdio.h>
#include "f_mutateMatrix.h"

int main(int argc, char** argv){
    if (argc != 4){
        printf("Invalid arguments\nUsage: ./mutateMatrix [fileName] m n\n");
        return 1;
    }
    FILE* fp = fopen(argv[1], "r");
    int rows, cols;
    int m = atoi(argv[2]);
    int n = atoi(argv[3]);
    fscanf(fp, "%d %d", &rows, &cols);
    int** matrix = (int**)malloc(sizeof(int*) * rows);

    for (int i = 0; i < rows; i++){
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            fscanf(fp, "%d", &matrix[i][j]);
        }
    }

    mutateMatrix(matrix, rows, cols, m, n);
    printMatrix(matrix, rows, cols);
    for (int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);
    fclose(fp);
    return 0;



}