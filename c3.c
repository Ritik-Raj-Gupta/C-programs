// declare all the variables first
#include<stdio.h>
int main(){
	float p=23000.45f ,r=20.1f, t=10, si=0.0f, total=0.0f;
	si=p*r*t/100;
	total=p+si;
	printf("Simple interest is %.2f and total amount is %.2f",si,total);
	return 0;
}
