#include<stdio.h>
int main(){
	float temp=0.0f, height=0.0f, weight=0.0f;
	printf("Enter height in cm and weight in kg: ");
	scanf("%f%f",&height,&weight);
	printf("\nBMI is: %f",weight/((height/100)*(height/100)));
}
