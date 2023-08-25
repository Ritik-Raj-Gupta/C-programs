/*
Array of structures
*/
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
//Write a program to read and display information of n number of books in a library 
int main()
{
    struct student s[100];
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    fflush(stdin); // Clears buffer so that any input is not missed : if not used than gets is skipped
    for(i=0;i<n;i++){
    	printf("Enter information for %d student:\n",i+1);
    	printf("Enter name: ");
    	gets(s[i].name);
    	printf("Enter roll number: ");
    	scanf("%d", &s[i].roll);
    	printf("Enter marks: ");
    	scanf("%f", &s[i].marks);
		fflush(stdin); // Clearing the buffer after each set of input
	}
    for(i=0;i<n;i++){
    	printf("================Displaying Information of %d student:======================\n",i+1);
    	printf("Name: ");
    	puts(s[i].name);
    	printf("Roll number: %d\n",s[i].roll);
    	printf("Marks: %.1f\n", s[i].marks);
    	printf("===========================================================================");
	}
    return 0;
} 
