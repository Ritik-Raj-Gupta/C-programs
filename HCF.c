#include<stdio.h>
#include<math.h>
int main(){
	int a,b,i;
	printf("Enter two numbers to find HCF: ");
	scanf("%d %d",&a,&b);
	if(a<0 || b<0){
		printf("Enter positive numbers!");
	}
	else{
		for(i=fmin(a,b);i>0;i--){
			if(a%i==0 && b%i==0){
				printf("HCF of %d and %d is %d.",a,b,i);
				break;
			}
		}
		/*
		i=fmin(a,b);
		while(i>0){
			if(a%i==0 && b%i==0){
				printf("HCF of %d and %d is %d.",a,b,i);
				break;
				}
			i--;
		}
		*/
	}
	return 0;
}
