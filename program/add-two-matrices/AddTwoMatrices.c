// Improved C program for addition of two n*n matrices
#include <stdio.h>
#define MAX 100

// Function prototypes to keep our code organized
void inputMatrix(int mat[MAX][MAX], int n, const char* name);
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int n);
void printMatrix(int mat[MAX][MAX], int n);

int main() {
    int n;
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];

    // Input size with basic error handling
    printf("Enter the size of the n*n matrix (Max %d): ", MAX);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        printf("Invalid input. Please enter a valid size between 1 and %d.\n", MAX);
        return 1; // Exit the program with an error code
    }

    // Call our functions to handle the heavy lifting
    inputMatrix(mat1, n, "First");
    inputMatrix(mat2, n, "Second");

    addMatrices(mat1, mat2, mat3, n);

    printf("\nResult of Matrix Addition:\n");
    printMatrix(mat3, n);

    return 0;
}

// Function to handle gathering user input
void inputMatrix(int mat[MAX][MAX], int n, const char* name) {
    printf("Enter elements for the %s Matrix:\n", name);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function strictly dedicated to the math
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function strictly dedicated to displaying the output
void printMatrix(int mat[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
