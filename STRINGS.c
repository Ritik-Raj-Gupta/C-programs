/*
STRINGS: collection of characters followed by a null character (\0 -> it is used to denote end of string)
		-> SYNTAX of declaration : char <name>[size] { size is no. of char +1(for null character) } 
		-> INITIALISATION : char str[6]="HELLO"; || char str[]={'H','E','L','L','O','\0'}; || char str[]={{'B'},{'Y'},{'E'},{'\0'}};
		-> Partial initialisation : charr str[6]="He"; < |H e \0 \0 \0 \0| > { where value not given it assigns null character }
		--> i> strlen(str) = gives length of string w/o counting the null character
		    ii> sizeof(str) = gives length of string counting the null character also
		    
		-> Pointer to character : // might give error in input
								int main(){
								char *str=NULL;
								str="Hello";
								printf("%s",str);
								return 0;
							    }
		-> stricmp() --> ignores the case of characters while comparing
*/

/*
STRING library FUNCTIONS:
	i> strcpy(destination , source); { copies all charcaters of string to another } { after copying it returns copied string } { SYNTAX: strcpy(char *s1, const char *s2; } { assigns null character automatically }
	ii> strncpy(destination, source, size in chars) { copies no. of characaters specified } { SYNTAX: strcpy(char *s1, const char *s2, size_t n); } { assigns null character automatically } 
	iii> strcat(pointer s1, const pointer s2) { appends s2 to s1 } { returns s1 } { SYNTAX: strcat(char *s1, const char *s2; }
	iv> strncat(pointer s1, const pointer s2, size in chars) { appedns no. of characters specified of s2 to s1 } { SYNTAX: strncat(char *s1, const char *s2 ,size_t n); }
	v> strcmp(str1, str2) { compares both strings character by character } { SYNTAX: strcmp(const char *s1, const char *s2); } 
						  { return 0 fro equal strings || +ve value for str1>str2 || -ve value for str1<str2 }
	vi> strncmp(str1, str2, size in bytes) { compares upto 'n' no. of characters specified of str1 with str2 } { SYNTAX: strcmp(const char *s1, const char *s2, size_t n); }
	vii> strlen(str) -> no. of charcters w/o null character
	viii> strrev() -> reverse of string { char * strcmp(char *s); }
	ix> strlwr() -> lowercase all characters of string
	x> strupr() -> uppercase all characters of string
*/

#include<stdio.h>
#include<stdio.h>
#include<string.h>
/*
int main(){
	/*
	char *str=NULL;
	str="Hello";
	printf("%s",str);
	*/
	/*
	char s1[]="Hello";
	char s2[6];
	s2=s1; // compile time error cuz s2 is a contant pointer here { array name is equivalent to constant pointer } 
	*/
	/*
	char *str="Hello";
	// printf("%c",*str); // str pointer at 0 index so 1st char
	// str=str+1; // next index so pointer+1
	// printf("%c",*str); // printing next character
	while(*str!='\0'){
		printf("%c",*str);
		str++;
	}
	*/
	/*
	char s1[]="	hELLO";
	char *s2=NULL;
	s2=s1;  		// Allowed as s2 is NULL pointer
	printf("%s",s2);
	---------------------------------------------
	char s[]="He is not a good player. He sucks at playing";
	int i=0,w=1;
	while(s[i]!='\0'){
		/*
		if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
			s[i]='$';
		}
		--------------------------------
		if(s[i]==' ' && s[i+1]!=' '){
			w+=1;
		}
		i++;
	}
	printf("\nNUMBER OF CHARACTERS : %d",i); // includes null character
	printf("\nNUMBER OF WORDS : %d",w);
	// printf("%s",s);
	return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[6]="Hello";
	char str3[6],str4[2];
	char str5[15]="Strings",str6[6]="Class";
	char str7[3]="WE",str8[4]="are";
	char str9[4]="HOW",str10[4]="how";
	char str11[12]="Programming",str12[9]="Programs";
	int x;
	strcpy(str3,str1);
	puts(str3);
	strncpy(str4,str1,1);
	str4[1]='\0';
	puts(str4);
	strrev(str3);
	puts(str3);
	strcat(str5,str6);
	puts(str5);
	strncat(str5,str6,2);
	puts(str5);
	strlwr(str7);
	puts(str7);
	strupr(str8);
	puts(str8);
	x=strcmp(str9,str10);
	printf("\n%d",x);
	x=stricmp(str9,str10);
	printf("\n%d",x);
	x=strncmp(str11,str12,7);
	printf("\n%d",x);
	printf("\n%d",strlen(str9));
	return 0;
}