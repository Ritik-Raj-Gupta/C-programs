/*
BY REFERENCE
*/
/* #include<stdio.h>
//void ref(int[],int);
int largest(int[]);
int main(){
	int arr[5]={1,2,3,4,5}, c;
	// printf("Elements by reference!");
	// ref(arr,5);
	// printf("\nElements of array after reference: ");
	// for(c=0;c<5;c++){
	//	printf("%d ",arr[c]);
	// }
	printf("The largest element is %d.",largest(arr));
	return 0;
}

/* void ref(int x[],int size){
	int i;
	printf("\nArray is:");
	for(i=0;i<size;i++){
		printf("%d ",x[i]);
		x[i]=100;				//Elements of array are updated in the arr[] also
	}
} 
int largest(int x[]){
	int max,i;
	max=x[0];
	for(i=0;i<5;i++){
		if(x[i]>max){
			max=x[i];
		}
	}
	return max;
} */
// BY VALUE
#include<stdio.h>
void value(int);
int main()
{
	int arr[]={1,2,3,4.5};
	int i;
	printf("\n Elements by value");
	for(i=0;i<5;i++)
	{
		value(arr[i]);
		return 0;
	}
}

void value(int u)
{
	printf("%d",u);
}
