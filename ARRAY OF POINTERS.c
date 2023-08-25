#include<stdio.h>
int main(){
	int a=5,b=10,c=20,i;
	//int *p[3]={&a,&b,&c}; // array of pointers
	int *p[3]={&a,&b,&c};
	for(i=0;i<3;i++){
		printf("%d\n",*p[i]);
	}
	return 0;
}

