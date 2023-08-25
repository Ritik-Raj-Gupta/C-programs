/*
// AVAILABLE IN <stdlib.h> 
// a --> string
atof -> string to float { SYNTAX: double atof(const char *ptr); } { returns float }
atoi -> string to integer { SYNTAX: int atoi(const char *ptr); } { returns integer }
atol -> string to long integer { SYNTAX: long atol(const char *ptr); } { returns long integer }
itoa -> integer to string { SYNTAX: char* itoa(int value, const char *str, int base); } { returns string } 
		{ int base means string to be represented as octal/binary/hexadecimal type of string }
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	double d;
	int i;
	long int l;
	d=atof("77.03");
	printf("%.2lf",d);
	i=atoi("99");
	printf("\n%d",i);
	l=atol("99999");
	printf("\n%ld",l);
	int a=123;
	char str[100];
	itoa(a,str,2);
	printf("\n%s",str);
	itoa(a,str,10);
	printf("\n%s",str);
	itoa(a,str,16);
	printf("\n%s",str);
	itoa(a,str,8);
	printf("\n%s",str);
	itoa(a,str,5); // any random base
	printf("\n%s",str);
	return 0;
}