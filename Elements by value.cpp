#include<stdio.h>
void value(int);
int main()
{
	int arr[]={1,2,3,4.5};
	int i;
	printf("\n Elements by value");
	for(i=0;i<5;i++)
	{
		value(arr[i]);
		return 0;
	}
}

void value(int u)
{
	printf("%d",u);
}
