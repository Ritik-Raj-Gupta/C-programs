/*
#include<stdio.h>
void eg(int*,int);
int main(){
	int a[]={1,2,3,4,5};
	int *p=a;
	eg(p,5);
	return 0;
}
void eg(int *p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n%d",*(p+i));
	}
}
*/
#include<stdio.h>
int largest(int*,int);
int main()
{
	int a[100],n,i;
	printf("\nEnter n:");
	scanf("%d",&n);
	printf("\nEnter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nLargest element is:%d",largest(a,n));
	return 0;
}
int largest(int *p,int n)
{
	int i,max=*p;
	for(i=1;i<n;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	return max;
}

