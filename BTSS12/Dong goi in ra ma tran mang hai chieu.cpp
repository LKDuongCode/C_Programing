#include <stdio.h>

void printMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 3;
    int cols = 4;
    
    // Tao mot mang hai chieu va gan gia tri 
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i * cols + j + 1;
        }
    }
    
    // In ra ma tran
    printMatrix(matrix, rows, cols);
    
    // giai phong bo nho
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}
