#include <stdlib.h>
#include <stdio.h>
// mutate matrix:
// inputs: m, n
// multiplies each entry by n and adds m to it 
// newMat[i][j] = m * mat[i][j] + n



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
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("Make sure your inputs are valid otherwise your program will tweak out\n");
    int rows, cols, m, n;

    printf("Enter your m value: ");
    scanf("%d", &m);
    printf("Enter your n value: ");
    scanf("%d", &n);

    printf("How many rows is your matrix?: ");
    scanf("%d", &rows);
    printf("Columns?: ");
    scanf("%d", &cols);
    
    int** matrix = (int**)malloc(sizeof(int*) * rows);

    for (int i = 0; i < rows; i++){
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Enter your matrix:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    mutateMatrix(matrix, rows, cols, m, n);
    printf("\nYour new matrix is:\n");
    printMatrix(matrix, rows, cols);
    for (int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix); // make sure to free this otherwise there WILL be memory leaks (any .nfsXXXXX indicates a memory leak)
    return 0;
}