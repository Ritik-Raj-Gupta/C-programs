// declare all the variables first
#include<stdio.h>
int main(){
	float area=0.0f,rad=0.0f;
	scanf("%f",&rad);
	area=3.14*rad*rad;
	printf("%.2f",area);
	return (0);
}
/* creating or initiating variable means giving it a memory location. it has default garbage value i.e. anonymous value.*/
// short and long are type modifiers. e.g. longint or shortint
// american standard code for information interchange -- ASCII
// single quote for character only and double quote for string
// syntax for printf ---> printf("",any number of arguments)
// for length after decimal we use ''%.nf'' n iis number of digits after decimal
// ''f'' after the value in faloat value is to make it float constant rather than the double constant(default type)
