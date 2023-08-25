/*
Operators
> Categories: unary, binary, ternary
> Unary --> unary minus(to show negative value), unary plus(to show positive value), increment(pre[increment first then use] and post[use and then increment]), 
			decrement(pre[decrement first then use] and post[use first then decrement]) 
*/
/* 
unary operator over binary 
e.g. z=x+y++
	first z=x+y then y++
*/
#include<stdio.h>
int main(){
// unary minus 
int x=10,y;
y=-x;
printf("%d and y%d and x%d",x,y,x);
// increment pre
y=++x;
printf("\nx%d y%d",x,y);
// increment post
y=x++;
printf("\nx%d y%d",x,y);
// decrement pre
y=--x;
printf("\nx%d y%d",x,y);
//decrement post
y=x--;
printf("\nx%d y%d",x,y);
}

