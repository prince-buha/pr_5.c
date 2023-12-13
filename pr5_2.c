/*
    Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
a[2][0] = 7
a[2][1] = 8
a[2][2] = 9

Entered Matrix:
1 2 3
4 5 6
7 8 9

The largest element in the array is: 9
    */

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

