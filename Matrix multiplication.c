#include<stdio.h>
int main(){
	int arr1[3][3],arr2[3][3],i,j,k,c1,r1,c2,r2,r=0;
	printf("Enter order of 1st matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter order of 2nd matrix: ");
	scanf("%d%d",&r2,&c2);
	while(c1!=r2){
		printf("Invalid order for multiplication!");
		printf("\nEnter order of 1st matrix: ");
		scanf("%d%d",&r1,&c1);
		printf("Enter order of 2nd matrix: ");		
		scanf("%d%d",&r2,&c2);
	}
	int res[r1][c2];
	printf("Enter array1 elements: ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter array2 elements: ");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Array1:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d ",arr1[i][j]);
		}
	printf("\n");
	}
	printf("Array2:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d ",arr2[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				r+=arr1[i][k]*arr2[k][j];
			}
		res[i][j]=r;
		r=0;
		}
	}
	printf("Product matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",res[i][j]);
		}
	printf("\n");
	}
	return 0;
}
