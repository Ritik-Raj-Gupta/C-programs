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
	gets(s.name);
	printf("Enter Roll No of student: ");
	scanf("%d",&s.rno);
	printf("Enter marks of student: ");
	scanf("%f",&s.marks);
	printf("%s with roll no %d has scored %f marks.",s.name,s.rno,s.marks);
	return 0;
}

