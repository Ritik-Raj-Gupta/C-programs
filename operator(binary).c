/*
Operators
> Categories: unary, binary, ternary
> Binary --> addition, subtraction, division(use when reduce number by 1 digit), multiplication, modulus(%), 
*/
// division --> int/int=int ; int/float=float ; float/float=float
// precedence--> [*,/,%](same priority) > [+,-] if same priority then left to right(associativity)

#include<stdio.h>
int main(){
	printf("int / int: %d",1/2);
printf("\nint/float: %f",1/2.0);
printf("\nfloat/float: %f",1.0/2.0);
printf("\n%d",2*(3+5)/2%3-7+5*2);
printf("\n%f",5.3%2); /*compile error for modulus between int n float or float n float
						we use fmod() for it*/
}

