#include<stdio.h>
int main(){
	int i=1,a,s=0;
	printf("Enter number to check for perfect number: ");
	scanf("%d",&a);
	if(a<1){
		printf("Enter a positive number!");
	}
	else{
	/*
	for(i=1;i<a;i++){
		if(a%i==0){
			s+=i;
		}
	*/
	while(i<a){
		if(a%i==0){
			s+=i;
		}
		i=i+1;
	}
	}
	if(a==s){
		printf("%d is a perfect number.",a);
	}
	else{
		printf("%d is not a perfect number.",a);
	}
	return 0;
}

