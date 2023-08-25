/*
*/
#include<stdio.h>
int main(){
	int a,i,b,j;
	printf("Enter number range to print table: ");
	scanf("%d%d",&a,&b);
	for(i=fmin(a,b);(a<=i && i<=b)||(a>=i && i>=b);i++){
		for(j=1;j<11;j++){
			printf("\n%d * %d = %d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
