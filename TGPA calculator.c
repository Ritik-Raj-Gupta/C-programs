#include<stdio.h>
int main(){
	char a;
	printf("Enter grade: ");
	scanf("%c",&a);
	switch(a){
		case 'O':
		case 'o':
			printf("Your TGPA is 10.");
			break;
		case 'A':
		case 'a':
			printf("Your TGPA is 9.");
			break;
		case 'B':
		case 'b':
			printf("Your TGPA is 8.");
			break;
		case 'C':
		case 'c':
			printf("Your TGPA is 7.");
			break;
		case 'D':
		case 'd':
			printf("Your TGPA is 6.");
			break;
		case 'E':
		case 'e':
			printf("Your TGPA is 5.");
			break;
		case 'F':
		case 'f':
			printf("Your TGPA is 4.");
			break;
		default:
			printf("Please enter valid grade!");
			break;
		
	}
	return 0;
}
