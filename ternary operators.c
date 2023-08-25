/*
Ternary operators(condition operators)
		syntax: exp1 ? exp2 :exp3; [ if exp1 is True then exp2 is answer else exp3 is answer ]
*/
/* last priority order */
#include<stdio.h>
int main(){
	int c,a,b;
	scanf("%d%d",&a,&b);
	
/*	Method 1	--> a%2==0?printf("Even"):printf("Odd"); // alternate for 'if else'
	if(a%2!=0){
		printf("\n%s","Odd");
	}
	else{printf("\n%s","Even");
	}*/
	
/*	Method 2	--> a>18?printf("Eligible"):printf("not eligible");*/
	a>b?printf("%d > %d",a,b):printf("%d < %d",a,b); // Methdo 3
	c=a>b?a:b;
	printf("\n%d",c);
	return 0;
}

