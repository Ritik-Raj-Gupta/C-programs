/*
Formatted -> scanf() & printf()
i> printf() - int printf(char*str<string>,...<arbitrary variables>) , it returns int output which is the number of characters { \n is treated as 1 character } ,
			** field width <%fillingchar*f_w*datatype>
						--- int >
					"%f_wd" <f_w is field width value>, { -ve f_w means left justification with spaces otherwise it is right justfied w/o spaces} { 0f_w means 0 instead of spaces }
					, no 0 will come on right i.e. -ve f_w cannot have filling characters
					
						--- float >
					f_w=x.y <x-field width, y-field precision>	
					
						--- string >
					f_w=x.y <x-field width, y-num of characters>
					
					
ii> scanf() - returns> num of inputs
*/

/*#include<stdio.h>
int main(){
/*	int x;
	x=printf("Hello");
	printf("%d",x);
	printf("%d",printf("Hello"));
	int c=123;
	printf("%45d",c);
*/

/*	int x=1,y=12,z=123,q=1234;
	float p=45.3678f;
	printf("\n%4d",x);
	printf("\n%4d",y);
	printf("\n%4d",z);
	printf("\n%4d",q);
	printf("\n%-4d",x); // -ve sign signifies right justified, cannot use filling_char here
	printf("\n%-4d",y);
	printf("\n%-4d",z);
	printf("\n%-4d",q);
	printf("\n%04d",x);
	printf("\n%04d",y);
	printf("\n%04d",z);
	printf("\n%04d",q);
	printf("\n%7.2f",p); // 7 is field width and 2 is precision	<first check precision to round off then see field width>
	printf("\n%07.2f",p); // 0 is the filling character instead of space
*/

/*	char x[]="Hello";
	printf("%s",x);
	printf("\n%7s",x); // 7 is field width
	printf("\n%07s",x); // 0 is filling char
	printf("\n%7.2s",x); // .2 is the number of chars of string to be printed
	printf("\n%07.2s",x); // all from above
*/

/*
	int x,y,z,e;
	printf("\nEnter values: ");
	z=scanf("%d%d%d",&x,&y,&e);
	printf("%d",z);
*/

/*	return 0;
}
*/

// there is no bound checking in array

/*
Unformatted -> character input ->> getchar() <stdio.h>, {getch(), getche()}<conio.h>, putchar()<stdio.h>, putch()<conio.h>
				string input ->> {gets(), puts()}<stdio.h>
*/
#include<stdio.h>
#include<conio.h>
int main(){
	/*
	char ch;  			// compiler waits for enter key to be pressed
	printf("\nEnter character:");
	ch=getchar();
	putchar(ch);
	*/
	/*
	char ch;			// no need to press enter key in getch and putch
	ch=getch();
	putch(ch);
	*/
	/*
	char ch;
	ch=getche();  // shows the entered key also
	*/
	
	/*char x[10];
	puts("Enter string value:"); // gets take string input i.e. multiple word input
	gets(x);
	//scanf("%s",x); // scanf takes only one word input
	puts(x);
	*/
	return 0;
}

