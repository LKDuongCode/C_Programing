#include<stdio.h>
int main(){
	int bYears;
	printf("Moi ngai nhap vao nam sinh\n");
	scanf("%d",&bYears);
	int age;
	age=2023-bYears;
	printf("Tuoi cua ngai la: %d\n",age);
	printf("Tuoi cua ngai la so: %s",age%2==0?"Chan":"Le"); 
} 
