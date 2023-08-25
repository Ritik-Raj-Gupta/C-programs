/*
Recursion-> alternative of iteration
>used for shorter code
>function calling itself
-> Base case > stopping point of recurrence
-> Recursive case > condition which keeps on recurring unless base case is met
*/

/*
function declaration can be done separately or together
e.g int func(int x){printf("%d",x);}
e.g int func(int); int func(int x){printf("%d",x);}
*/

#include<stdio.h>
long long int factorial(int); // Function declaration

int main(){
	int x;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("\nFactorial is %lld",factorial(x));
	return 0;
}
long long int factorial(int x){ // Function definition
	if(x==0 || x==1){
		return 1;
	}
	else{
		return x*factorial(x-1);
	}
}
