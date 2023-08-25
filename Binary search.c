/*
Binary search ->
				arr > 10 20 32 45 65 90 102
				      0   1  2  3  4  5  6
				*search for 90
				beg=0 // beg=mid+1 for searching right side of array 
				last=6 // last=mid-1 for searching left side of array
			each iteration the length of array is halved
			**if mid element is greater than the key than we search left side of array in ascending order and right side for descending order
			  else vice versa
*/
#include<stdio.h>
int main(){
	int a[10],i,c=0,beg=0,key, last ,mid ,loc=-1,n;
	n=sizeof(a)/sizeof(a[0]);
	last=n;
	printf("Enter array of numbers in ascending order!");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to search for: ");
	scanf("%d",&key);
	while(beg<=last){
		mid=(last+beg)/2;
		if(a[mid]==key){
			loc=mid;
			c=c+1;
			break;
		}
		else if(a[mid]>key){
			last=mid-1;
			c=c+1;
		}
		else{
			c=c+1;
			beg=mid+1;
		}
	}
	if(loc!=-1){
	printf("Element  found at %d position and in %d iterations.",loc+1,c);
	}
	else{
		printf("Element not found!");
	}return 0;
}
