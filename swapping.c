// declare all the variables first
#include<stdio.h>
int main(){
	// using temp variable ''i.e. using 3rd variable swapping''
	float a=1.0f;float b=2.0f; float temp=0.0f;
	printf("before swapping %.1f %.1f",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swapping %.1f %.1f",a,b);
	// using only 2 variables
	int c=1, d=2;
	printf("\nbefore swapping %d %d",c,d);
	c=c+d;d=c-d;c=c-d;
		printf("\nafter swapping %d %d",c,d);
}
