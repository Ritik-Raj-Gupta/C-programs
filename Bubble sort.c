/*
BUBBLE SORT (sinking sort)->
	no. of passes = n-1 // n is number of elements
>eg array -> 15 6 10 2 1 3 11 9

*/
#include<stdio.h>
int main(){
	int a[8],j,big,i,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter elements of array! ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	big=a[0];
	// Descending order
	/*
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(a[i]>a[j]){
			big=a[j];
			a[j]=a[i];
			a[i]=big;
		}
		else{
			continue;
		}
	}
}
*/
	// Ascending order
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
		if(a[i]>a[j]){
			big=a[j];
			a[j]=a[i];
			a[i]=big;
		}
		else{
			continue;
		}
	}
}
	printf("\nArray in ascending order is: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}

