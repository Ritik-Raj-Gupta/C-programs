#include<stdio.h>
int main(){
int a=23;
float b=9.54;
double c=8.8;
char d='a';
long double e;
short int f;
printf("\n %d %f %f %c %f %d",a,b,c,d,e,f);
printf("\n %d %d %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
// sizeof(variable) gives the byte size (memory size) of datatype of variable
}
