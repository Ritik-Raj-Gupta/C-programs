/* Switch (used for menu driven programs)
syntax-> switch(testing variable)
			{
				case1 <constant>:
				 ............ 
				 break;
				case2 <constant2>:
				...........
				break;
				.
				.
				.
				default:
				.........
			}
*/
// Rules of switch case-> read from ppt
#include<stdio.h>
int main(){
/* Assignment operator returns always True
	int x=9;
	if (x=10){
		printf("h");
}
	else{printf("w");
}

*/
	/* Ex 1 
	char operator;
	double n1,n2;
	printf("Enter an operator [=, -, *, /]: ");
	scanf("%c",&operator);
	printf("\nEnter 2 operands: ");
	scanf("%lf%lf",&n1,&n2);
	switch(operator)
	{
		case '+':
			printf("\n%lf + %lf = %lf",a1,n2,n1+n2);
			break;
		case '-':
			printf("\n%lf - %lf = %lf",n1,n2,n1-n2);
			break;
		case '*':
			printf("\n%lf * %lf = %lf",n1,n2,n1*n2);
			break;
		case '/':
			printf("\n%lf / %lf = %lf",n1,n2,n1/n2);
			break;
		default:
			printf("\nInvalid input!");
	}
	*/
	
	/* Ex 2
	int a;
	printf("Enter day number!");
	scanf("%i",&a);
	switch(a){
		case (1):
			printf(" Monday");
			break;
		case (2):
			printf(" Teusday");
			break;
		case (3):
			printf(" Wednesday");
			break;
		case (4):
			printf(" Thursday");
			break;
		case (5):
			printf(" Friday");
			break;
		case (6):
			printf(" Saturday");
			break;
		case (7):
			printf(" Sunday");
			break;
		default:
			printf(" Invalid input!");
	}
	*/
	
	/* Ex 3
	char al;
	printf("Enter alphabet: ");
	scanf("%c",&al);
	switch(al){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is Vowel.",al);
			break;
		default:
			printf("%c is Consonant.",al);
	}
	*/
	
	return 0;
}
