/*
Initialisation: i> int *p=a;
				ii> int *p=&a[0];
				iii> int *p=&a;
<p=p+1*sizeoftype> to traverse array
*/
#include<stdio.h>

int main(){
	int a[100],n;
	int *ptr=a,*ptr1=a[3],i,sum=0;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		/*scanf("%d",i+ptr);
		scanf("%d",&ptr[i]);
		scanf("%d",&i[ptr]);*/ // alternative methodsAlter
	}
	printf("%d",*ptr);
	ptr=ptr+1; // to traverse to next element | evaluated as <ptr=ptr+1*sizeoftype>
	printf("\n%u\n",*ptr);
	ptr=ptr-1; // to traverse back | evaluated as <ptr=ptr-1*sizeoftype>
	printf("%d\n",ptr);
	printf("The array is: ");
	for(i=0;i<n;i++){
		sum+=*(ptr+i);
		printf("%d ",*(ptr+i)); // *ptr+i means value+i cuz *ptr gives value then we add i to it
		/*printf("%d ",*(i+ptr)); 
		printf("%d ",ptr[i]);
		printf("%d ",i[ptr]);*/ // other alternatives for it
	}
	printf("\nSum of array elements is: %d",sum);
	printf("\n%u\n",ptr);
	return 0;
}
