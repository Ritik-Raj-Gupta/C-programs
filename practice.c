// enter price and quantity of 3 items and claculate total after 10% discount
#include<stdio.h>
int main(){
	float price=0.0f;int quan;float total=0.0f;
	printf("Enter price and quantity for 1st product ");
	scanf("%f%d",&price,&quan);
	total=quan*price;
	printf("\nEnter price and quantity for 2nd product ");
	scanf("%f%d",&price,&quan);
	total=total+(quan*price);
	printf("\nEnter price and quantity for 3rd product ");
	scanf("%f%d",&price,&quan);
	total=total+(quan*price);
	total=total*90/100.0;
	printf("\ntotal price -> %d",total);
	return 0;
}
