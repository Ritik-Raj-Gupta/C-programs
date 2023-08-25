/*
Reading and Displaying one record of structure
*/
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int rno;
	float marks;
};
int main(){
	struct student s;
	printf("Enter name of student: ");
	gets(s.name); //Reading
	printf("Enter Roll No of student: ");
	scanf("%d",&s.rno); //Reading
	printf("Enter marks of student: ");
	scanf("%f",&s.marks); //Reading
	printf("%s with roll no %d has scored %f marks.",s.name,s.rno,s.marks); //Displaying
	return 0;
}

//Write a program to read and display info of a student
/*
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    printf("Enter information for first student:\n");
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}
*/
