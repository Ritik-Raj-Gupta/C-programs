#include<stdio.h>
void example(int,int x);
int main(){
	int x=10,y=20;
	example(x,&y);
	printf("%d%d",x,y);
	return 0;
}
void example(int a,int x){
	a=a+10;
	*p=*p+10;
}
