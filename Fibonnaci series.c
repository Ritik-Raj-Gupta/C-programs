#include<stdio.h>
int main(){
	int z;
	int i=1,n,a=0,b=1,c;
	printf("1- N terms of fibonacci series\n2- Fibonacci series upto N\n ");
	scanf("%d",&z);
	switch(z){
		case 1:
			printf("Enter number of terms of fibonacci series to print: ");
			scanf("%d",&n);
			printf("%d %d ",a,b);
			c=a+b;
			a=b;	
			b=c;
			/*
			for(i=1;i<n-1;i++){
				printf("%d ",c);
				c=a+b;
				a=b;
				b=c;}
			*/
			while(i<n-1){
				printf("%d ",c);
				c=a+b;
				a=b;
				b=c;
				i+=1;
			}
			break;
		case 2:
			printf("Enter number to print fibonacci series upto it: ");
			scanf("%d",&n);
			printf("%d %d ",a,b);
			c=a+b;
			a=b;
			b=c;
			for(i=1;i<n-1;i++){
				if(c<=n){
				printf("%d ",c);
				c=a+b;
				a=b;
				b=c;
				}
				else{break;}
			}
			/*
			while(i<n-1){
				if(c<=n){
				printf("%d ",c);
				c=a+b;
				a=b;
				b=c;
				i=i+1;
				}
				else{break;}
			}
			*/					
			break;
		default:
			printf("Invalid input!");
			break;					
	
	
	}
	return 0;
}
