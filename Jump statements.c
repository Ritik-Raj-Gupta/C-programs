/*
Jump statements-> break, continue
*/
#include<stdio.h>
int main(){
//BREAK	
	/*
	int i;
	for(i=1;i<=10;i++){
		if (i%5==0){
		break;
		}
		else{
		printf("Hello");
		}
	}
	*/
	/*
	int i=3,sum=0;
	for(;;){
		sum+=i;
		if(i==2){
			break;
		}
		i--;
	}
	printf("%d",sum);
	*/
	/*
	int i=1;
	do{
		printf("Hello\n");
		if(i==3){
			break;
		}
		i++;
	}
	while(i<=10);
	*/
// CONTINUE	
	/*
	int i;
	for(i=1;i<=10;i++){
		if (i%5==0){
		continue;
		}
		else{
		printf("\n%d",i);
		}
	}
	*/
	int i;
	for(i=1;i<=10;i++){
		if (i%2==0 || i%3==0){
		continue;
		}
		else{printf("%d",i);
		}
	}
	printf("%d",i);
	
	return 0;
}
