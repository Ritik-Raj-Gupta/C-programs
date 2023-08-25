#include<stdio.h>
int main(){
	float sal;
	printf("Enter your annual salary: ");
	scanf("%f",&sal);
	if(sal<=300000){
		printf("Hurray! no tax for you!");
	}
	else if(300000<sal && sal<=600000){
		printf("Tax for you is 5 percent which is equal to %.2f",sal*5.0/100.0);
	}
	else if(600000<sal && sal<=900000){
		printf("Tax for you is 10 percent which is equal to %.2f",sal*10.0/100.0);
	}
	else if(900000<sal && sal<=1200000){
		printf("Tax for you is 15 percent which is equal to %.2f",sal*15.0/100.0);
	}
	else if(1200000<sal && sal<=1500000){
		printf("Tax for you is 20 percent which is equal to %.2f",sal*20.0/100.0);
	}
	else{
		printf("Tax for you is 30 percent which is equal to %.2f",sal*30.0/100.0);
	}
	return 0;
}
