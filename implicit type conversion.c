#include<stdio.h>
int main(){
	char c='A';
	printf("%c",c);
	printf("\n%d",c);
	int a;
	printf("\nInput ascii code: ");
	scanf("%d",&a);
	printf("Character:%c",a);
	char x[]="Hello";
	printf("\n%c",x);
	printf("\n%c",x[3]);
	printf("\n%d",sizeof(x));
}
// number of characters+1 is size of string due to null character at end of string i.e. size=numberofchar + 1
// char variable[valuesize+1]=value
// char variable[size+1] is mandatory to give if not giving any value at time of initiation
