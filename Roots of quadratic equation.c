#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	float rep,imp;
	float r1,r2;
	printf("Enter coefficients of x^2, x and constant of quadratic equation: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>0)
	{
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	printf("Given quadratic equation is: %dx^2+(%d)x+(%d)",a,b,c);
	printf("\nDiscriminant of given equation is %d.",d);
	if(d==0){
		printf("\nRoots of the quadratic equation are real and equal!");
		printf("\nRoots are: %.3f and %.3f",r1,r2);
	}
	else if(d>0){
		printf("\nRoots of the quadratic equation are real but not equal!");
		printf("\nRoots are: %.3f and %.3f",r1,r2);
	}
	else{
		printf("\nRoots of the quadratic equation are imaginary!");
		rep=-b/(2*a);
		imp=sqrt(abs(d))/2*a;
		printf("\nRoots are: %.3f+%.3fi and %.3f-%.3fi",rep,imp,rep,imp);
	}
	}
	else{
		printf("Coefficient of x^2 cannot be zero!");
	}
	return 0;
}
