#include<stdio.h>
int main(){
	float a,b,c,d,e,f,agg=0.0f;
	printf("Enter marks of all 6 subjects: ");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	agg=a+b+c+d+e+f;
	agg=agg/6.0;
	if(agg>90){
		printf("Your overall grade is A.");
	}
	else if(agg>=80 && agg<90){
		printf("Your overall grade is B.");
	}
	else if(agg>=70 && agg<80){
		printf("Your overall grade is C.");
	}
	else if(agg>=40 && agg<70){
		printf("Your overall grade is D.");
	}	
	else{
		printf("Your overall grade is E.");
	}
	return 0;
}
