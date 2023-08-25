// Copying data from one file to another
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	FILE *fs,*ft; 
	char ch; 
	fs=fopen("Poem.txt","r"); 
	if(fs==NULL) 
	{ 
		puts("Cannot open source file"); 
		exit(1); 
	} 
	ft=fopen("Copy1.txt","w"); 
	if(ft==NULL) 
	{ 
		puts("Cannot open target file"); 
		fclose(fs); 
		exit(2); 
	} 
	ch=fgetc(fs); 
	while(ch!=EOF) 
	{ 
		fputc(ch,ft); 
		ch=fgetc(fs); 
	} 
	fclose(fs); 
	fclose(ft); 
}
