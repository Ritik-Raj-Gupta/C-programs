#include<stdio.h>
int main(){
	float dollar=0.0f;
	printf("Enter amount in $: ");
	scanf("%f",&dollar);
	printf("\nAmount in ruppee(inr) is: %f",dollar*82.56);
	printf("\nAmount in pounds is: %f",dollar*0.83);
	printf("\nAmount in euros is: %f",dollar*0.93);
}
