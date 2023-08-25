#include<stdio.h>
int main(){
	// Using WHILE loop
	int a,i=2;
	char res;
	printf("Enter integer to find whether it is prime or not: ");
	scanf("%d",&a);
	if(a<=1){
		printf("%d is neither composite nor prime!",a);
	}
	else{
	
	while(i<a){
		if(a%i==0){
			res='n';
			break;
		}
		i=i+1;
	}
	if(res=='n'){
		printf("%d is composite.",a);
	}
	else{
		printf("%d is prime.",a);
	}}
	/* Using FOR loop 	
	int a,i;
	char res;
	printf("Enter integer to find whether it is prime or not: ");
	scanf("%d",&a);
	if(a<=1){
		printf("%d is neither composite nor prime!",a);
	}
	else{
	
	for(i=2;i<a;i++){
		if(a%i==0){
			res='n';
			break;
		}	
	}
	if(res=='n'){
		printf("%d is composite.",a);
	}
	else{
		printf("%d is prime.",a);
	}} */
	return 0;
}
