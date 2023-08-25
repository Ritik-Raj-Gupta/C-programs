/*
do while syntax ->
		do {
		expresions to be done;
		}
		while(condition);
even if condition is false it will work once i.e. first do is executed then while condition is checked
*/
#include<stdio.h>
/* do while syntax

*/
int main(){
	int i;
	char p;
	/*do{
		printf("\nHello!");
		i++;
	}
	while(i<5);*/
	do{
		printf("Whether you want to continue? Y/N ");
		scanf("%c",&p);
	}while(p=='y' || p=='Y');
	
	return 0;
}
