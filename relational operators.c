/* Relational operators
		- comparison operator (<,>,>=,<=,==[equality operator],!=)
		- logical operators(and[&&], or[||], not[binary{!)])

*/
#include<stdio.h>
int main(){
	int a=2, b=3;
	printf("%d",a>b); // comparison operator example
	printf("\n%d",a+b>2 and b<a);
	return 69;
}
// short circuited property -> if in logical and(&&) if 1st is 'false' then no evaluation of 2nd expression ***
// short circuited property -> if in logical or(||) if 1st is 'true' then no evaluation of 2nd expression ***
// arithmetic oprtr> logical oprtr (and>or)
// 0 is treated as false value, rest all are taken as true

