#include<stdio.h>
#include<math.h>
int main(){
	int i,a,s=0,l,b,p;
	printf("Enter number to check for armstrong number: ");
	scanf("%d",&a);
	p=a;
	if(a<1){
		printf("Enter a positive number!");
	}
	else{
		l=sizeof(a)-1;
		/*
		while(a>0){
			b=a%10;
			s=s+pow(b,l);
			a=a/10;
		}
		*/
		for(;a>0;a=a/10){
			b=a%10;
			s=s+pow(b,l);
		}
	if(p==s){
		printf("%d is an armstrong number!",p);
	}
	else{
		printf("%d is not an armstrong number!",p);
	}
	}
	
	
	return 0;
}
