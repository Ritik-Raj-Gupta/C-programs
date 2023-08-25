/*
special operators--> comma(,), sizeof(), type
*/
#include<stdio.h>
int main(){
	int a=2, b=3, c;
	c=a,b;
	printf("%d",c);
	c=(a,b); // output is last value i.e. rightmost value
	printf("\n%d",c);
	c=(a++,a+=b);
	printf("\n%d %d %d",a,b,c);
	return 69;
}
