/*
Random access:
>>>>>>>>	fseek(filepointer,offset,referenceposition);
	offset-> distance to move in the file | +ve for forward | -ve for backward
	referenceposition-> i)SEEK_SET <offset- +ve> <beginning of file>
						ii)SEEK_CUR <offset- +ve or -ve> <current position of file>
						iii)SEEK_END <offset- -ve> <end of file>

>>>>>>>     ftell(filepointer) -> to know about current position of file pointer>

>>>>>>>     rewind(filepointer); -> set file pointer to beginning
*/
// C Program to demonstrate the use of fseek()
#include <stdio.h>
int main()
{
	FILE *fp;
	char str[12];
	fp = fopen("test.txt", "r");
	//printf("\n%ld", ftell(fp));
	// Moving pointer to end
	fseek(fp, 0, SEEK_END);
	printf("\n%ld", ftell(fp));
	fseek(fp, -4, SEEK_END);
    fscanf(fp,"%s",str);
printf("\n%s",str);
	// Printing position of pointer
	printf("\n%ld", ftell(fp));
	rewind(fp);
	printf("\n%ld", ftell(fp));
	fseek(fp, 2, SEEK_SET);
	fseek(fp,2,SEEK_CUR);
    fgets(str,12,fp);
	printf("\n%s",str);
	return 0;
}
