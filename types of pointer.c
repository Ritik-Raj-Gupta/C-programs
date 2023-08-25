/*
TYPES OF POINTERS
i> Wild pointer (or uninitialised pointer):
	->a type of pointer which can point towards any random or anonymous memory location
	-> declare: int *p;
	-> dereferencing a wild pointer is treated as invalid operation and compilers can exhibit unexpected behaviour
	-> when we try to print address stored in wild pointer it could be any random value assigned to it by compiler
	SOLUTION
		-> assign some valid address to it

ii> Null pointer:
	-> a pointer which is not pointing anywhere when it is initialised
	-> declaration: int *p=NULL;

iii> void pointer(or generic pointer):
	-> it is a pointer which can point to any memory allocation
	-> declare: void *p=&a;
	-> initialisation: (datatype*)p 

iv> constant pointer
	-> cannot reassign value once assigned
	-> declaration: int *const p=&a; {reassigning gives error}
	-> 2nd way: int const *p=&a; {cannot change value via pointer i.e. *p=*p +1 not allowed}
	-> 3rd way: int const *const p=&a; {combination of both above}
v> Dangling pointer
	-> a pointer which keeps on pointing toward the same memory location even though the memory location is deallocated or deleted
	-> TYPES: 1> compile time case {block over case}
			  2> runtime case 
	-> declare: int *p=NULL; inside block (p=&a)
	-> SOLUTION: provide null to pointer after block over to disconnct pointer
*/
#include<stdio.h>
int main(){
	int *p;
	int a=10;
	// printf("\n%u",p); // any random address
	// printf("\n%u",*p); // invalid operation --> dereferencing a wild pointer
	// SOLUTION
	p=&a;
	printf("%d",*p); // here pointer is no longer a wild pointer, as it is initialised
	return 0;
}

