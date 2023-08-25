/*
type conversion - implicit and explicit conversion
Implicit--> done by compiler, always automative, value may - <i> promotion(conversion from lower to upper type [no loss of value]
														<ii> demotion(conversion from upper to lower type [data could be lost]
Explicit--> forcefull conversion done by us
*/
// type conversion changes are temporary i.e. the value doesn't change
#include<stdio.h>
int main(){
	int a=2,result;
	float b=3.4f;
	result=a+(int)b; // b used as int
	printf("%d",result);
	result=a+b; // a is used as float for calculation then it is changed back to int as result is int type
	printf("\n%d",result);
	return 0;
}

