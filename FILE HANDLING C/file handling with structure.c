/*
feof() function will keep on returning zero value until unless end of file is not reached when end is there it will return true value
*/

//----------- fwrite(stuctobjaddress,sizeofobj,noofrecords,filepointer) -------------------- <objaddress means &objname>
/*
#include<stdio.h> 
int main() 
{ 
	struct employe 
	{ 
		int emp_code; 
		char name[20]; 
		int hra; 
		int da; 
		int ta; 
	}; 
	FILE *fp; 
	struct employe e[5]; 
	int i,x; 
	fp=fopen("Employe.txt","wb"); //wb for writing in binary mode
	if(fp==NULL) 
	{ 
		printf("\n Error Opening file"); 
		exit(1); 
	} 
	printf("\n Enter the details:"); 
	for(i=0;i<2;i++) 
	{ 
		printf("\n\n Enter the employee code:"); 
		scanf("%d",&e[i].emp_code); 
		fflush(stdin); 
		printf("\n\n Enter the name of the employee:"); 
		gets(e[i].name); 
		fflush(stdin); 
		printf("\n\n Enter the HRA,DA and TA:"); 
		scanf("%d%d%d",&e[i].hra,&e[i].da,&e[i].ta); 
		x=fwrite(&e[i],sizeof(e[i]),1,fp); 
		printf("\n%d",x); 
	} 
	fclose(fp); 
	return 0; 
}
*/

// -------------------- fread(objaddress,sizeofobj,noofrecordstoberead,filepointer) ---------------------- <objaddress means &objname>
/*
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
	struct employee 
	{ 
		int emp_code; 
		char name[20]; 
		int hra; 
		int da; 
		int ta; 
	}; 
	FILE *fp; 
	struct employee e; 
	int i,x; 
	fp=fopen("Employe.txt","rb"); 
	if(fp==NULL) 
	{ 
		printf("\n Error Opening file"); 
		exit(1); 
	} 
	printf("\n THE DETAILS OF THE EMPLOYEE ARE:"); 
	while(1) 
	{  
	fread(&e,sizeof(e),1,fp); 
	if(feof(fp)) 
	break;	 
	printf("\n\n Employee Code:%d",e.emp_code); 
	printf("\n\n Name:%s",e.name); 
	printf("\n\n HRA,DA and TA:%d %d %d",e.hra,e.da,e.ta); 
	} 
	fclose(fp); 
	return 0; 
}
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp=fopen("Employee.txt","r");
	if(fp==NULL)
	{
		puts("Cannot open file");
		exit(1);
	}
	while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
	{
		printf("\n%s %d %.2f",e.name,e.age,e.bs);
	}
	fclose(fp);
}
