#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Moi ngai nhap gia tri cua ba so nguyen!");
	scanf("%d %d %d",&num1,&num2,&num3);
	int max,min;
	max=num1,min=num1;
	max=max<num2?max=num2:max;
	max=max<num3?max=num3:max;
	
	min=min>num2?min=num2:min;
	min=min>num3?min=num3:min;
	printf("max la: %d\n",max);
	printf("min la: %d", min);
} 
