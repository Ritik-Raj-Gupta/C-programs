/*
Loops [Iterative/repetitive/looping statements]
-> While/ For/ Do While loops
*/
#include<stdio.h>
int main(){

	/* Ex1
	int i=1,n,s=0,count=0;
	printf("Enter number of natural numbers to print! ");
	scanf("%d",&n);
	while(i<=n){
		s=s+i;
		if(i%5==0){
		
		printf("\n%d",i);
		count+=1;
	}
		i=i+1;
	}
	printf("\n%d is number of multiples of 5 in range %d",count,n);
	printf("\nSum of %d natural numbers=%d",n,s);
	*/
	
	/* Ex2 <Multiplication table>
	int a,i=1,m;
	printf("Enter number to find multiplication table, and upto which number find table ");
	scanf("%d %d",&a,&m);
	while (i<=m){
		printf("\n%d * %d = %d",a,i,a*i);
		i+=1;
	}
	*/
	
	/*Ex3 <factorial of number>
	int i=1,a;
	long long int fac=1;
	printf("Enter number to find factorial of: ");
	scanf("%d",&a);
	if(a<0){printf("Factorial of -ve number is not possible!");
	}
	else{
	
		while(i<=a){
			fac=fac*i;
			i=i+1;
		}
	printf("\nFactorial of %d is %d",a,fac);
		}
	*/
	
	/*Ex4 <counting length of a integer>
	int a,count=0;
	printf("Enter integer to find number of digits: ");
	scanf("%d",&a);
	while(a>0){
		count=count+1;
		a=a/10;
	}
	printf("Number of digits in given integer is %d.",count);
	*/
	
	/*Ex5 <adding all digits of a number>
	int a,count=0;
	printf("Enter integer to find number of digits: ");
	scanf("%d",&a);
	while(a>0){
		count=count+a%10;
		a=a/10;
	}
	printf("Sum of digits in given integer is %d.",count);
	*/
	
	/*Ex6 <Displaying reverse of a number>
	int a,rev=0;
	printf("Enter integer to find reverse: ");
	scanf("%d",&a);
	while(a>0){
		rev=rev*10+a%10;
		a=a/10;
	}
	printf("Reverse of given integer is %d.",rev);
	*/
	
	/*Ex6 <Palindrome>
	int a,rev=0,i;
	printf("Enter integer to find palindrome: ");
	scanf("%d",&a);
	i=a;
	while(i>0){
		rev=rev*10+i%10;
		i=i/10;
	}
	if(a==rev){
		printf("%d is Palindrome",a);
	}
	else{
		printf("%d is not palindrome",a);
	}
	*/
	
	/*Ex7 <prime or not>
	int a,i=2;
	char res;
	printf("Enter integer to find whether it is prime or not: ");
	scanf("%d",&a);
	if(a<=1){
		printf("%d is neither composite nor prime!",a);
	}
	else{
	
	while(i<a){
		if(a%i==0){
			res='n';
			break;
		}
		i=i+1;
	}
	if(res=='n'){
		printf("%d is composite.",a);
	}
	else{
		printf("%d is prime.",a);
	}}
	*/
	
	return 0;
}
