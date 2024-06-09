#include<stdio.h>
int main (){
	float iYears,funds,iMonth,interest,mReceived,month,count;
	printf("moi ngai nhap vao tien von:");
	scanf("%f",&funds);
	printf("\n Moi ngai nhap vao so thang gui tien:");
	scanf("%f",&month);
	printf("moi ngai nhap vao tien lai theo nam:");
	scanf("%f", &iYears);
	iMonth=iYears/12;
	count=0; 
	while (count<month){
		interest=iMonth*funds;
		mReceived=interest+funds;
		count++; 
	}
		printf("\ntien lai la:%.3f\n",interest);
		printf("tien nhan duoc la:%.3f",mReceived);	
} 
