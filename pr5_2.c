#include <stdio.h>

int main() {
    int r, c;
    int i,j;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter array's elements:\n");
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int maxElement ;
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            if (a[i][j] > maxElement) {
                maxElement = a[i][j];
            }
        }
    }

    printf("\nThe largest element in the array is: %d\n", maxElement);

    
}

