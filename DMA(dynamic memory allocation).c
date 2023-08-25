/*
AKA runtime memory allocation
-> malloc() : memory allocation							{
-> calloc() : contiguous memory allocation				{	Available in <stdlib.h> header file
-> realloc() : reallocation of memory					{
-> free() : deallocation of memory						{	
*/

/*
Heap -> used in DMA
Stack -> used in compile time memory allocation
*/

#include<stdio.h>
#include<stdlib.h>

// malloc < SYNTAX: (void*)malloc(no. of bytes) > || { no. of bytes = n*sizeof(type)} || { void* can be replaced with other data type }
/*
int main(){
	int *p, n,i;
	printf("Enter number of elements to work with: ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int)); // if sufficient memory not available then malloc will give null
	if(p==NULL){
		printf("Memory not available!");
		exit(1);
	}
	else{
		printf("Memory allocation was successfull!");
		printf("\nAddress of pointer %u",p);
		printf("\nEnter elements: ");
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
		printf("Entered elements are: ");
		for(i=0;i<n;i++){
			printf("%d ",*p+i);
		}
		free(p); // freeing(deallocating) the memory for other tasks
	}

----------------------------------------------
	int n,i;
	float *p,sum,avg;
	printf("Enter number of elements to work with: ");
	scanf("%d",&n);
	p=(float*)malloc(n*sizeof(int)); // if sufficient memory not available then malloc will give null
	if(p==NULL){
		printf("Memory not available!");
		exit(1);
	}
	else{
		printf("Memory allocation was successfull!");
		printf("\nAddress of pointer %u",p);
		printf("\nEnter elements: ");
		for(i=0;i<n;i++){
			scanf("%f",p+i);
		}
		for(i=0;i<n;i++){
			sum+=*(p+i);
		}
		avg=sum/n;
		printf("\nSum is: %f",sum);
		printf("\nAverage is: %f",avg);
		free(p);
	}
-----------------------------------------------------	
	return 0;
}
*/

// calloc <SYNTAX: (void*)calloc(n,sizeof(type)) > { n is number of blocks to reserve } || { default values are 0 not garbage value }
/*
int main(){
	int *p, n,i;
	printf("Enter number of elements to work with: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int)); // if sufficient memory not available then malloc will give null
	if(p==NULL){
		printf("Memory not available!");
		exit(1);
	}
	else{
		printf("Memory allocation was successfull!");
		printf("\nAddress of pointer %u",p);
		printf("\nEnter elements: ");
		for(i=0;i<n;i++){
			scanf("%d",p+i);
		}
		printf("Entered elements are: ");
		for(i=0;i<n;i++){
			printf("%d ",*p+i);
		}
------------------------------------------------------------------------
		int a,f=0;
		printf("Enter element to search: ");
		scanf("%d",&a);
		for(i=0;i<n;i++){
			if(a==*(p+i)){
				printf("Element fount at position %d",i+1);
				f=1;
				break;
			}
		}
		if(f==0){
			printf("Element not found!");
		}
---------------------------------------------------------------------
		free(p); // freeing(deallocating) the memory for other tasks
	}
	return 0;
}
*/

// realloc <SYNTAX: (void*)realloc(ptr,new size) > { new size = n*sizeof(type) } 
int main()
{
	int *ptr,n,m,i;
	printf("\n Enter initial value of n:");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Memory allocation failure(calloc())");
		exit(1);
	}
	else
	{
		printf("\n Memory allocation successful");
		printf("\n Enter values as per initial requirement:");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		printf("\n Entered values are:");
		for(i=0;i<n;i++)
		{
			printf("\n%d",*(ptr+i));
		}
		m=n;
		printf("\n Enter new value of n for reallocation:");
		scanf("%d",&n);
		ptr=(int *)realloc(ptr,n*sizeof(int));
		if(ptr==NULL)
		{
			printf("\n Memory allocation failure while reallocation");
			exit(2);
		}
		else
		{
			printf("\n Memory reallocated successfully");
			printf("\n Enter new values as per requirement");
			for(i=m;i<n;i++)
			{
				scanf("%d",ptr+i);
			}
			printf("\n All values entered are(old+new):");
			for(i=0;i<n;i++)
			{
				printf("\n%d",*(ptr+i));
			}
		}
		/*
		printf("\n Memory allocation successful");
		printf("\n Enter values as per initial requirement:");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		int max,m;
		max=*ptr;
		for(i=0;i<n;i++){
			if(max<*(ptr+i)){
				max=*(ptr+i);
			}
		}
		printf("Max ele is: %d",max);
		m=n;
		printf("\n Enter new value of n for reallocation:");
		scanf("%d",&n);
		ptr=(int *)realloc(ptr,n*sizeof(int));
		if(ptr==NULL)
		{
			printf("\n Memory allocation failure while reallocation");
			exit(2);
		}
		else
		{
			printf("\n Memory reallocated successfully");
			printf("\n Enter new values as per requirement");
			for(i=m;i<n;i++)
			{
				scanf("%d",ptr+i);
			}
		}
		for(i=m;i<n;i++){
			if(max<*(ptr+i)){
				max=*(ptr+i);
			}
		}
		printf("Maximum element is: %d",max);
		*/
		free(ptr);
		printf("\n Memory deallocated");
	return 0;
}

/*
Memory leak : allocating memory but not deallocating it and this process is continued until unless heap size is exhausted.
	Consequence-> application crashes
*/
/*
Dangling pointer
	-> pointer pointing to value is freed then also pointer points to same values
*/
