/*
STORAGE CLASSES
four things about a variable-
							>default value - 0 or garbage value
							>storage location - ram or cpu register
							>scope - local or global (accessibility - inside block in which it is defined or accessible inside all function available in the entire program
							>lifetime - inside the block of function in which it is defined or throughout program(global)
*/

/*
Auto (automatic) storage class 
- default storage for **local variable**
- storage in memory/ram
- default value is garbage value
- scope is local to block
- lifetime is till control remains within the block in which it is defined
- SYNTAX-> auto int x,y;
*/

/*
Register storage class
- local variable
- storage in CPU registers
- default value is garbage value
- scope is local to block
- lifetime is till control remains within the block in which it is defined
- SYNTAX-> register int x;
- limitation i>only small sized variable can be stored ii>limited in number iii>variable cannot be taken as user input
- automatically alloted auto class when registers are full
*/

/*
Static storage class
- storage in ram
- default initial value ??
- scope is local to block
- lifetime throughout program
- SYNTAX static int x=12;
- variable created only once in its lifetime and only dies with the end of program
*/

/*
Extern storage class
- storage ram
- scope global
- lifetime throughout program
- default value is 0
- SYNTAX extern int x; <new variable x is not created rather compiler looks for variable in whole of the program hence we cannot assign variable in syntax>
*/

#include<stdio.h>
int main(){
	return 0;
}

