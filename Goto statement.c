/*
goto statement-> unconditional jump, move to any section of program, forward / backward jump
SYNTAX->
		goto labelname;
			Note: no duplicate labels

label creation syntax-> labelname:
								....
*/
#include<stdio.h>
int main(){
	int x;
	label1:
		printf("Enter the value of x:");
		scanf("%d",&x);
	if(x>100){
	goto label1;
	}
	else{
	goto label2;
	}
	label2:
		printf("Value is ok!");
	return 0;
}
