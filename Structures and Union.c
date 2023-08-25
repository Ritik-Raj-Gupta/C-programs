/*
Structure:
		Collection of heterogenous data elements.
DECLARATION: struct <name>{ variables declare }objname,objname;
Creating object of struct: struct <name> objname;
							objname.variable=value; or objname={ value , value , ...}; CANNOT ALTER THE SEQUENCE OF VARIABLES!!
*/
// w/o pragma pack(1)-> the compiler allocates memory in order of multiple of highest size datatype
#include<stdio.h>
#include<string.h>
#pragma pack(1)  // prevent bit padding
// Advantage of bit padding--> Execution will be faster(To speed up things)
/*
struct struct1{
	char name[20];
	int num;
	float num2;
};
int main(){
	struct struct1 v1;
	v1.num=89;
	// v1.name="Hello";   // incorrect
	strcpy(v1.name,"Hello World!");
	v1.num2=90.8789;
	printf("%s %d %f",v1.name,v1.num,v1.num2);
	return 0;
}
*/
struct book{
	char name[30];
	float price;
	int pageno;
};
struct book b4={"MySQL",150.50,330}; // Global object
int main(){
	struct book b1,b2;
	struct book b3={"R programming",342.3,890}; // Local object
	strcpy(b1.name,"C programming!"); // Assigning string value to struct element ; SYNTAX: strcpy(struct.var,string);
	strcpy(b2.name,"Python programming!");
	b1.price=1829.90;
	b2.price=2112.89;
	b1.pageno=340;
	b2.pageno=440;
	printf("Name: %s\nPrice: %f\nPage number= %d",b1.name,b1.price,b1.pageno);
	printf("\n");
	printf("\nName: %s\nPrice: %f\nPage number= %d",b2.name,b2.price,b2.pageno);
	printf("\n");
	printf("\nName: %s\nPrice: %f\nPage number= %d",b3.name,b3.price,b3.pageno);
	printf("\n");
	printf("\nName: %s\nPrice: %f\nPage number= %d",b4.name,b4.price,b4.pageno);
	printf("\n%d",sizeof(b1));
	return 0;
}
