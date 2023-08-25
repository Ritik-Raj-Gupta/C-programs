/*
Bitwise operators [&(AND), |(OR), ^(XOR), ~(complement[returns -(n+1)]), >>(rigth shift)[alternative of division], <<(left shift)]
applications--> competitive programming, cryptography, compression
*/

/*
a >> b; means a/2**b     b is number of bits right shifting

a << b; means a * 2**b 		b is number of bits left shifting
*/
#include<stdio.h>
int main(){
	int a=11,b=22;
	printf("%d",a&b);
	printf("\n%d",a|b);
	printf("\n%d",a^b);
	printf("\n%d",~a);
	printf("\n%d",~5);
	printf("\n%d",23>>2); // 23 / 2**2
	printf("\n%d",9<<3); // 9 * 2**3
}

