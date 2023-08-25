/*
FILE HANDLING
			> Open the file
							-> var = fopen(filepathwithfilename,filemode);  <var is file type pointer> <FILE(inbuilt structure) *var;>
							-> File opening mode --> r(read) ; w(write) ; a(append) ; < {rb ,wb ,ab}-> for binary >
			> Read the file
							-> fgetc()
							-> fgets()
							-> fscanf()
							-> fread()
			> Write on file
							-> fputc()
							-> fputs()
							-> fprintf()
							-> fwrite()
			> Save the file
			> Close the file
*/

/*
	NOTE: file and program in same location
*/

// ------------------------------------------- fgetc() ------------------------------------------------------

/*
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp; // starting the file structure
	char str[10];
	int i=0,ch;
	fp=fopen("student.txt","r");
	if(fp==NULL){
		printf("\nThe file could not be opened");
		exit(1); // Terminate the program ; nonzero value passing for error
	}
	ch=fgetc(fp);
	while(ch!=EOF){
		//if(i==9)
		//break;
		str[i]=(char)ch;
		ch=getc(fp);
		i++;
	}
	str[i]='\0';
	printf(str);
	fclose(fp);
	return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[10000];
	int i=0,ch;
	fp=fopen("C:/Users/ritik/OneDrive/Desktop/FILE HANDLING C/student1.txt","r");
	if(fp==NULL)
	{
		printf("\n The file could not be opened");
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		
		str[i]=(char)ch;
		ch=fgetc(fp);
		i++;
	}
	str[i]='\0';
	printf("\n%s",str);
	fclose(fp);
}
*/
// ASCII code for EOF macro is 26
// feof() -> gives non zero answer until file end is not reached i.e. it tracks the end of the file

// ------------------------------------------------------ fgets() --------------------------------------------

// syntax: fgets(var,size,filepointer) ; var in which we are storing the data ; size is number of bits in each line i.e. max characters it can show in one line ; characters in read line is size-1
// reads data line by line

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[10];
	fp=fopen("C:/Users/ritik/OneDrive/Desktop/FILE HANDLING C/student1.txt","r");
	if(fp==NULL)
	{
		printf("\n File could not be opened");
		exit(1);
	}
	while(fgets(str,10,fp)!=NULL)
	printf("\n%s",str);
    fclose(fp);
    return 0;
}

// --------------- remove(filename); -> delete a file
// --------------- rename(newname,oldname) -> rename a file


