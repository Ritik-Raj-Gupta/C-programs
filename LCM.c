#include<stdio.h>
#include<math.h>
int main(){
	int a,b,i;
	printf("Enter two numbers to find LCM: ");
	scanf("%d %d",&a,&b);
	if(a<0 || b<0){
		printf("Enter positive numbers!");
	}
	else{
		/*
		i=fmax(a,b);
		while(1){
			if(i%a==0 && i%b==0){
				printf("LCM of %d and %d is %d.",a,b,i);
				break;
			}
		i+=1;
		}
		*/
		for(i=fmax(a,b);;i++){
				if(i%a==0 && i%b==0){
				printf("LCM of %d and %d is %d.",a,b,i);
				break;
			}
		}
	}
	return 0;
}
