// nhap vao cac so va tinh tong cac so d, end khi nhap 0
#include<stdio.h>
int main (){
	printf("nhap vao mot so");
	int a=1;
	int sum=0;
	while(a!=0){
		scanf("%d",&a);
		sum+=a;
		printf("\ntong cac so vua nhap la %d",sum);
	}
} 
