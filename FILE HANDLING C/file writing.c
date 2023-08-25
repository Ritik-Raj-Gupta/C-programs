//write mode
/*
---------------- fputc(character,filepointer)<writes character wise> ------------------------------------
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	FILE *fp; 
	char feedback[100]; 
	int i; 
	fp=fopen("Comments.txt","w"); 
	if(fp==NULL) 
	{ 
		printf("\nThe file could not be opened"); 
		exit(1); 
	} 
	printf("\n Enter some string:"); 
	gets(feedback); 
	for(i=0;feedback[i]!='\0';i++) 
	{ 
		fputc(feedback[i],fp); 
	} 
	fclose(fp); 
	return 0; 
}
*/
// append mode
/*
int main() 
{ 
	FILE *fp; 
	char feedback[100]; 
	int i; 
	fp=fopen("Comments.txt","a"); 
	if(fp==NULL) 
	{ 
		printf("\nThe file could not be opened"); 
		exit(1); 
	} 
	printf("\n Enter some string:"); 
	gets(feedback); 
	for(i=0;feedback[i]!='\0';i++) 
	{ 
		fputc(feedback[i],fp); 
	} 
	fclose(fp); 
	return 0; 
}
*/

// --------------- fputs(stringvar,filepointer) <writes lines of info until blank line is entered> ---------------
//write mode
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp;
char s[80];
fp=fopen("Poem.txt","w");
if(fp==NULL)
{
	puts("Cannot open file");
	exit(1);
}	
printf("\n Enter a few lines of text:\n");
while(strlen(gets(s))>0)
{
	fputs(s,fp);
	fputs("\n",fp);
}
fclose(fp);
}
*/

//append mode
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp;
char s[80];
fp=fopen("Poem.txt","a");
if(fp==NULL)
{
	puts("Cannot open file");
	exit(1);
}	
printf("\n Enter a few lines of text:\n");
while(strlen(gets(s))>0)
{
	fputs(s,fp);
	fputs("\n",fp);
}
fclose(fp);
}
*/

// ----------------------- fprintf(filepointer,"str/formatspecifiers",vars) -----------------------------------
/*
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    FILE *fp; 
	int i; 
	char name[20]; 
	float salary; 
	fp=fopen("Details.txt","w"); 
	if(fp==NULL) 
	{ 
	printf("\n The file could not be opened"); 
	exit(1); 
	} 
	for(i=0;i<3;i++) 
	{ 
		puts("\n Enter your name:"); 
		gets(name); 
		fflush(stdin); 
		puts("\n Enter your salary:"); 
		scanf("%f",&salary); 
		fprintf(fp,"%s \t %.2f\n",name,salary); 
		fflush(stdin); 
	} 
	fclose(fp); 
    return 0;	 
}
*/

// ----------------------- fscanf(filepointer,"formatspecifiers",variableaddresses) <to read from file> -----------------------------------
// ------------ fscanf(stdin,"formatspecifiers",variableaddresses) is equivalent to scanf as we are reading input from keyboard ------------
/*
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	FILE *fp; 
	char name[80]; 
	int roll_no; 
	int x; 
	fp=fopen("Checking.txt","r"); 
	if(fp==NULL) 
	{ 
		printf("\n File could not be opened"); 
		exit(1); 
	} 
	/*printf("\nEnter the name and roll number of the student"); 
	//READ FROM KEYBOARD 
	fscanf(stdin,"%s%d",name,&roll_no); 
	printf("\n NAME:%s \t ROLL NUMBER=%d",name,roll_no);*/ 
	//READ FROM FILE student1.txt 
     
/*	x=fscanf(fp,"%s%d",name,&roll_no); 
    printf("\n NAME:%s\t ROLL NUMBER=%d",name,roll_no); 
    printf("\n%d",x);//Number of values we are reading 
    fclose(fp); 
    return 0; 
}
*/

//----------- fwrite(stringtobewritten,sizeofeverycharacterwritten,no.ofcharacterstobewritten,filepointer) --------------------
// fwrite returns number of character it is writing in file
/*
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
int main() 
{ 
	FILE *fp; 
	int count; 
	char str[]="Programming in C"; 
	fp=fopen("Welcome.txt","w"); 
	if(fp==NULL) 
	{ 
		printf("\n The file could not be opened"); 
		exit(1); 
	} 
	count=fwrite(str,1,strlen(str),fp);//void *,size,no.of objects,file pointer 
	printf("\n%d bytes were written to the file",count); 
	fclose(fp); 
	return 0; 
}
*/

//----------- fread(strvartostoredata,sizeofeachchar,numofcharacterstoread,filepointer) --------------------
/*
#include<stdio.h> 
int main() 
{ 
	FILE *fp; 
	char str[9]; 
	fp=fopen("student1.txt","r"); 
	if(fp==NULL) 
	{ 
		printf("\n The file could not be opened"); 
	} 
	fread(str,1,8,fp);//void *,size,count,file pointer 
	str[8]='\0'; 
	printf("\n Data read from the file is:%s",str); 
	fclose(fp); 
	return 0; 
}
*/
