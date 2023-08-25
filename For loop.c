#include<stdio.h>
/* for loop syntax
	for(variable value assign [only happens 1st time] ; condition ; variable updation)
*/
int main(){
	int i;
	for(i=1/*assigning i=1*/;i!=19/*i<10 is condition of loop*/;i++/*variable updation expression*/){
		printf("%d",i);
	}
	return 0;
}

