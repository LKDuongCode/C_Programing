#include<stdio.h>
int main (){
	int busTicket=7000, age;
	printf("moi quy khach nhap so tuoi:");
	scanf("%d",&age);
	if(6<=age && age<18){
		printf("Gia ve cua quy khach la: %d",busTicket/2);
	}else if(18<=age && age<=60){
		printf("Gia ve cua quy khach la: %d", busTicket);
	}else{
		printf("Quy khach duoc mien phi ve xe bus!");
	}
}
