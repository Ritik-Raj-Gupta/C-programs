/*
#include<stdio.h>
void eg(int*,int*);
int main(){
	int a=5,b=10;
	int *p1=&a , *p2=&b;
	eg(p1,p2);
	return 0;
}
void eg(int *ptr1, int *ptr2){
	printf("Received values are: %d %d",*ptr1,*ptr2);
	printf("\nUpdating values ......");
	*ptr1=100;
	*ptr2=200;
}
*/
#include<stdio.h>
void example(int*,int*);
int main()
{	// *ptr++; ++ works first then * hence the value doesn't change but memory address is updated
	// (*ptr)++; address is not modified but value is modified
	int a=5,b=10;
	int *p1=&a,*p2=&b;
	example(p1,p2);
	printf("\nUpdated values of a and b are:%d,%d",a,b);
	return 0;
}
void example(int *ptr1,int *ptr2)
{
	printf("\nReceived values are:%d,%d",*ptr1,*ptr2);
	printf("\nupdating the values......");
	*ptr1=100;
	*ptr2=200;
}
