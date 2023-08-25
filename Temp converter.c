#include<stdio.h>
int main(){
	float temp=0.0f;
	printf("Enter temperature in degree C: ");
	scanf("%f",&temp);
	printf("\nTemperature in Kelvin is: %f",temp+273.15);
	printf("\nTemperature in Fahrenheit is: %f",temp*(9/5.0)+32);
}
