/*
Array - collection of homogenous variables, allocated contiguous(continuous) memory addresses
1D & 2D arrays
Declaration->
	datatype name[size/max no of elements];
Memory representation->
	|a[0]||a[1]||a[2]||a[3]||a[4]|
	a[0] -- lower bound
	a[4] -- upper bound
	size of array= upperbound - lowerbound + 1
Initialising array->
	int a[5]={1,2,3,4,5}; // complete initialisation
	int a[]={1,2,3,4,5}; // also valid 
	int a[5]={}; // all elements are 0
	int a[5]={1,2,3}; // a={1,2,3,0,0} i.e. rest elements 0
	int a[5]={1}; // rest elements 0
	int a[];
Accessing elements of array {indexing}->
	>Indexing from 0 & no negative indexing
printf("%u",a);    //     Base memory address of array
printf("%u",&a);   //            ''
printf("%u",&a[0]); //           ''
*/

// sizeof(arrayname) returns size of array in byte
// n(no. of elements in array)=sizeof(arrayname)/sizeof(a[0]) ---> should use 

/*
Reading values from array -> use loops
*/

/* Taking array elements as input from user ->
	int a[5]={},i=0,j=0;
	printf("Enter value: ");
	while(i<5){
	scanf("%d",&a[i]);
	}
	printf("Displaying elements!");
	while(j<5){
	printf("%d",a[j]);
	}
*/			
#include<stdio.h>
int main(){
	int a[10]={};
	int i=0,el,fr=0;//f=0;
	printf("Enter marks: ");
	while(i<10){
	scanf("%d",&a[i]);
	i++;
	}
	printf("\nEnter element to search: ");
	scanf("%d",&el);
	for(i=1;i<11;i++){
		if(el==a[i]){
			fr+=1;
		}
	}
	printf("\nFrequency of element is %d ",fr);
	return 0;
	
}
/*
Linear search->
	>search every element of array one by one
	>time consuming if element at last of array
*/
