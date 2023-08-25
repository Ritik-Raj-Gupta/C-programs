/*
Union -> user defined datatype ; collection of heterogenous data elements ; union variable will take one memory location for storing the values of all attributes ; memory sharing
		memory space equivalent to largest datatype ; variable come one by one in the memory
		NOTE: take input then display and then take new input i.e. output cannot be taken collectively
*/

/*
#include<stdio.h>
#pragma pack(1)
#include<string.h>
union example{
	int a;
	float b;
	double c;
};
int main(){
	union example e1;
	printf("%d",sizeof(e1));
	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
union Data {
   int i;
   float f;
   char str[20];
   char str1[20];
};

int main( ) {

   union Data data;
   data.i = 10;
   printf( "data.i : %d\n", data.i);
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
   strcpy( data.str1, "C++");
   printf( "data.str : %s\n", data.str1);
   return 0;
}
*/

/*
#include<stdio.h>
union Dta{
	int x,y;
	char z;
	float q;
};
int main(){
	union Dta data;
	data.x=97;
	printf("\n%d",data.y); // prints value stored in memory i.e. 12
	printf("\n%c",data.z); // prints char value of value stored in memory
	printf("\n%f",data.q); // prints 0.0000 cuz int and float no relation
	return 0;
};
*/

/*
#include<stdio.h>
union employee
{
	char name[30];
	int id;
	float salary;
}u;
int main()
{
	//union employee u;
	printf("\n Enter name:");
	gets(u.name);//Initialization
	printf("\n Entered name is:%s",u.name);//Accessing
	printf("\n Enter id:");
	scanf("%d",&u.id);//Initialization
	printf("\n Entered id is:%d",u.id);//Accessing
	printf("\n Enter salary:");
	scanf("%f",&u.salary);//Initialization
	printf("\n Entered salary is:%.2f",u.salary);//Accessing
	return 0;
}
*/

#include<stdio.h>
union employee
{
	char name[30];
	int id;
	float salary;
}u[100];
int main()
{
	//union employee u[100];
	int n,i;
	printf("\n Enter value of n:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
	printf("\n Enter name:");
	fflush(stdin);
	gets(u[i].name);
	printf("\n Entered name is:%s",u[i].name);
	printf("\n Enter id:");
	fflush(stdin);
	scanf("%d",&u[i].id);
	printf("\n Entered id is:%d",u[i].id);
	printf("\n Enter salary:");
	fflush(stdin);
	scanf("%f",&u[i].salary);
	printf("\n Entered salary is:%.2f",u[i].salary);
    }
	return 0;
}
