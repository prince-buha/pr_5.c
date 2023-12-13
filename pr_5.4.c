#include <stdio.h>

int main() {
    int rows, cols;
    int i,j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];
   

    printf("Enter array's elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int row, column;
    printf("\nEnter the row number to find the sum: ");
    scanf("%d", &row);
    if (row < 0 || row >= rows) {
        
        
    }


	int sumRow = 0;
    
    for (j = 0; j < cols; j++) {
        sumRow += arr[row][j];
    }
    printf("Sum of elements in row %d: %d\n", row, sumRow);

    printf("\nEnter the column number to find the sum: ");
    scanf("%d", &column);
    if (column < 0 || column >= cols) {
        
        
    }

    int sumColumn = 0;
    
    for ( i = 0; i < rows; i++) {
        sumColumn += arr[i][column];
    }
    printf("Sum of elements in column %d: %d\n", column, sumColumn);

    
}

