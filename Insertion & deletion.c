/*
Insertion
*/
#include<stdio.h>
/*
int main(){
	int c,position,value,n;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	int arr[n+1];
	for(c=0;c<n;c++){
		scanf("%d",&arr[c]);
	}
	printf("\nEnter location where you wish to insert element: ");
	scanf("%d",&position);
	printf("\nEnter element: ");
	scanf("%d",&value);
	for(c=n-1;c>=position-1;c--){
		arr[c+1]=arr[c];
	}
	arr[position-1]=value;
	printf("Resultant array is:\n");
	for(c=0;c<=n;c++){
		printf("%d\n",arr[c]);
	}
	return 0;
}
*/

/*
Deletion
*/
int main(){
	int c,n,position;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements of array: ");
	for(c=0;c<n;c++){
		scanf("%d",&arr[c]);
	}
	printf("\nEnter position of element to delete from the array: ");
	scanf("%d",&position);
	printf("\nNew array is: ");
	for(c=position-1;c<n-1;c++){
		arr[c]=arr[c+1];
	}
	for(c=0;c<n-1;c++){
		printf("%d ",arr[c]);
	}
	return 0;
}
