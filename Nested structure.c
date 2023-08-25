// =============== STANDALONE TYPE of nested structure ==================================
/* #include<stdio.h>
#include<string.h>
struct address{
	char housename[50];
	char city[50];
	char streetname[25];
};
struct Employee{
	int id;
	char name[25];
	float salary;
	struct address add;
};
int main(){
	struct Employee E;
	printf("Enter Employee ID : ");
	scanf("%d",&E.id);
	fflush(stdin);
	printf("Enter Employee name : ");
	gets(E.name);
	printf("Enter Employee salary : ");
	scanf("%f",&E.salary);
	fflush(stdin);
	printf("Enter Employee housename : ");
	gets(E.add.housename);
	printf("Enter Employee city : ");
	fflush(stdin);
	gets(E.add.city);
	printf("Enter Employee streetname : ");
	fflush(stdin);
	gets(E.add.streetname);
	printf("=====Employee details: \n");
	printf(E.name);
	printf("\n%d\n",E.id);
	printf(E.add.housename);
	return 0;
}
*/

/*
#include<stdio.h>
      struct Address
       {
              char Housename[25];
              char City[25];
              char Streetname[25];
       };
       struct Employee
       {
           int Id;
           char Name[25];
           float Salary;
		   
		   struct Address Add;
       };
       int main()
       {
              struct Employee E;
              printf("\n\tEnter Employee Id : ");
              scanf("%d",&E.Id);
              printf("\n\tEnter Employee Name : ");
              scanf("%s",E.Name);
              printf("\n\tEnter Employee Salary : ");
              scanf("%f",&E.Salary);
              printf("\n\tEnter Employee House Name : ");
              scanf("%s",E.Add.Housename);
              printf("\n\tEnter Employee City : ");
              scanf("%s",E.Add.City);
              printf("\n\tEnter Employee street name : ");
              scanf("%s",E.Add.Streetname);
              printf("\nDetails of Employees");
              printf("\n\tEmployee Id : %d",E.Id);
              printf("\n\tEmployee Name : %s",E.Name);
              printf("\n\tEmployee Salary : %f",E.Salary);
              printf("\n\tEmployee House No : %s",E.Add.Housename);
              printf("\n\tEmployee City : %s",E.Add.City);
              printf("\n\tEmployee street name: %s",E.Add.Streetname);

       }
*/

// ----------------------------------------------------------------------------------------------------

// =============== EMBEDDED TYPE of nested structure ==================================
							// > struct definition ke andar hi second struct ki definition
							// > parentstruct.childstruct.attribute
#include <stdio.h> 
struct Employee 
{ 
   char ename[20]; 
   int ssn; 
   float salary; 
   struct dob 
       { 
       int date; 
       int month; 
       int year; 
       }db1; 
 
}emp = {"Aniket",1000,1000.50,{22,6,1990}}; 
int main() 
{ 
printf("\nEmployee Name   : %s",emp.ename); 
printf("\nEmployee SSN    : %d",emp.ssn); 
printf("\nEmployee Salary : %.2f",emp.salary); 
printf("\nEmployee DOB    : %d/%d/%d",emp.db1.date,emp.db1.month,emp.db1.year); 
return 0; 
}
