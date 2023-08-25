/*
Pointer: a variable which holds address of another variable
		APPLICATIONS: i) Call by reference
					  ii) Dynamic memory allocation (DMA)
					            DMA -> malloc() , calloc() , realloc()
					  iii) pointer to structure
					  iv) passing array to a function
					  v) implementation of data structures
*/

// --------------------------- datatype of pointer and variable must be same ---------------------------

/*
DECLARATION
			<datatype> * <pointername>
			e.g. int *ptr; // integer pointer or pointer to integer
			e.g. int a=10; int *ptr=&a; // ptr pointer with address of a
*/
/*
INITIALISATION
			as soon as we assign the address of any variable to pointer
*/
/*
printf("%d",*ptr); // indirection operator / value at address operator / dereferencing -> when we display or access the value of variable through pointer
                               <*&a = a ;>
*/

// -----------Memory taken by a pointer
/*
any type of pointer will take some amount of memory i.e. 4/8/12/16 bytes
*/

/*
#include<stdio.h>
int main(){
	int *p1;
	char * p2;
	float *p3;
	double *p4;
	printf("%d %d %d %d",sizeof(p1),sizeof(p2),sizeof(p3),sizeof(p4));
	return 69;
}
*/

#include<stdio.h>
int main(){
// ----------------------------------------------	
	/*
	int a,b,c;
	int *p1=&a, *p2=&b, *p3=&c;
	printf("Enter values of a and b: ");
	scanf("%d%d",p1,p2);
	*p3=*p1+*p2;
	printf("Sum of the two numbers %d",*p3);
	*/
// ----------------------------------------------
	/*
	int r;
	int *p1=&r;
	float pi=3.14;
	printf("Enter radius: ");
	scanf("%d",p1);
	printf("Area is: %f",pi*(*p1)*(*p1));
	*/
// ------------------------------------------------	
	/*
	int a,b;
	int *p1=&a, *p2=&b;
	scanf("%d%d",p1,p2);
	if(*p1>*p2){
		printf("%d is bigger than %d",*p1,*p2);
	}
	else{
		printf("%d is bigger than %d",*p2,*p1);
	}
	*/
// ------------------------------------------------	
	printf("=============== POINTERSSSSSSSSSSSSSSSS! =====================");
	int a[]={89,231,23,3244,98};
	int *ptr=&a[0] ,*ptr2=&a[4];
	printf("%d",ptr2-ptr);
	return 0;
}

/*
POINTER PROPERTIES:
	i> we can apply increment or decrement operation to pointer:
							p++; ++p; p--; --p;
	ii> we can add or subtract any constant value from a pointer:
							p=p+6; p=p-3;
	iii> we can subtract 2 pointers [condition: both the pointer should point towards the same array]
							shortcut: (number of elements between both pointers)+1 <only valid if pointer point to different values>
							method: subtracting the pointers values<i.e. the memory addresses> then divide by sizeoftype <(p1-p2)/sizeoftype>
						  > it will return an integer
	iv> we can compare pointers <if pointers are pointing towards same array>
							p1>p2; p1<p2;
	v> we cannot add, multiply, divide, modulo to  <it will give error if used>
	vi> we cannot multiply, divide, modulo any constant with a pointer
*/
