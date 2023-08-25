#include<stdio.h>
int main(){
	/* Ex1
	int i,n,s=0,count=0;
	printf("Enter number of natural numbers to print! ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i;
		if(i%5==0){
		count+=1;
	}
		printf("\n%d",i);
	}
	printf("\n%d is the number of multiples of 5 in range %d",count,n);
	printf("\nSum of %d natural numbers=%d",n,s);
	*/
	
	/* Ex2 <Multiplication table>
	int a,i,m;
	printf("Enter number to find multiplication table, and upto which number find table ");
	scanf("%d %d",&a,&m);
	for(i=1;i<=m;i++){
		printf("\n%d * %d = %d",a,i,a*i);
	}
	*/
	
	/*Ex3 <factorial of number>
	int i,a;
	long long int fac=1;
	printf("Enter number to find factorial of: ");
	scanf("%d",&a);
	if(a<0){printf("Factorial of -ve number is not possible!");
	}
	else{
	
		for(i=1;i<=a;i++){
			fac=fac*i;
		}
	printf("\nFactorial of %d is %d",a,fac);
		}
	*/
	
	/*Ex4 <counting length of a integer>
	int a,count=0;
	printf("Enter integer to find number of digits: ");
	scanf("%d",&a);
	for(;a>0;a=a/10){
		count=count+1;
	}
	printf("Number of digits in given integer is %d.",count);
	*/
	
	/*Ex5 <adding all digits of a number>
	int a,count=0;
	printf("Enter integer to find sum of digits: ");
	scanf("%d",&a);
	for(;a>0;a=a/10){
		count=count+a%10;
	}
	printf("Sum of digits in given integer is %d.",count);
	*/
	
	/*Ex6 <Displaying reverse of a number>
	int a,rev=0;
	printf("Enter integer to find reverse: ");
	scanf("%d",&a);
	for(;a>0;a=a/10){
		rev=rev*10+a%10;
	}
	printf("Reverse of given integer is %d.",rev);
	*/
	
	/*Ex6 <Palindrome>
	int a,rev=0,i;
	printf("Enter integer to find palindrome: ");
	scanf("%d",&a);
	for(i=a;i>0;i=i/10){
		rev=rev*10+i%10;
	}
	if(a==rev){
		printf("%d is Palindrome",a);
	}
	else{
		printf("%d is not palindrome",a);
	}
	*/
	
	/*Ex7 <prime or not>
	int a,i;
	char res;
	printf("Enter integer to find whether it is prime or not: ");
	scanf("%d",&a);
	if(a<=1){
		printf("%d is neither composite nor prime!",a);
	}
	else{
	
	for(i=2;i<a;i++){
		if(a%i==0){
			res='n';
			break;
		}	
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
