/*
	Enter the Size of Row in Array: 3

Enter the Size of Column in Array: 3
Enter the Value for Element A[0][0]: 2
Enter the Value for Element A[0][1]: 4
Enter the Value for Element A[0][2]: 1
Enter the Value for Element A[1][0]: 3
Enter the Value for Element A[1][1]: 5
Enter the Value for Element A[1][2]: 4
Enter the Value for Element A[2][0]: 8
Enter the Value for Element A[2][1]: 2
Enter the Value for Element A[2][2]: 6

The Transpose of Matrix is:
2 3 8
4 5 2
1 4 6
	*/



#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the Size of Row in Array: ");
	scanf("%d",&r);
	printf("\nEnter the Size of Column in Array: ");
	scanf("%d",&c);
	int i,j;
	int a[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value for Element A[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe Transpose of Matrix is: ");
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
