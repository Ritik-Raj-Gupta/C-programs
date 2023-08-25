// syntax: a[row][column]
#include<stdio.h>
int main(){
	int i,j,r,c,d[100][100],res[100][100],e[100][100];
	// Initialisation
	printf("Enter number of row and column: ");
	scanf("%d%d",&r,&c);
	int arr[2][3]={{1,2,3},{4,5,6}}; // Complete initialisation
	int a[2][3]={1,2,3,4,5,6}; // Compiler automatically assignes first 3 values to 1st element and next 3 to next element
	int b[2][3]={{1},{2,3,4}}; // Partial initialisation
	int p[][3]={1,2,3,4,5,6}; // can skip row size , row size= no. of elements/columnsize
	// NOTE: cannot skip the column size
	/* int d[2][]={1,2,3,4,5,6}; // error	*/
/* ---------------Accessing array elements---------------------- */
	// printf("%d\n",b[1][2]);
	// ----------------- Matrix addition ----------------------
	printf("\nEnter elements of 1st array: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			//printf("%d ",a[i][j]);
			scanf("%d",&d[i][j]);
		}
	}
	printf("\nEnter elements of 2nd array: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			//printf("%d ",a[i][j]);
			scanf("%d",&e[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			res[i][j]=d[i][j]+e[i][j];
		}
	}
	printf("\nElements of resultant array are: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",res[i][j]);
		}
	printf("\n");
	}
	return 0;
}

