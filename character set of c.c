/*
character set is alphabets, digits, any special symbols and spaces.
Every single element in a program is a token.
Tokens: identifiers, variables, keywords(32), 
*/
/* 
Data types:
	char, unsigned char, int, unsigned int, short int, long int, unsigned short/long int, float, double 
type modifiers: short, long signed, unsigned
*/
/*
Format specifiers:
	%f(float),%d(signed int),%u(unsigned int)),%c(singe character),%s(string),%lf(double),%Lf(long double),%x(address w/o leading 0's in hexadecimal),
	%p(address with leading 0's in hexadecimal),%u(decimal address)
*/
#include<stdio.h>
#define MAX 10 // #define creates a (symbolic constant) constant variable(MAX) with value 10
int main(){
	int a=12;
	printf("%d",MAX);
	printf("\n%u",&a);
	printf("\n%p",&a);
}

