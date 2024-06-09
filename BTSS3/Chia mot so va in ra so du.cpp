#include<stdio.h>
int main(){
	int number;
	printf("Moi ngai nhap vao:");
	scanf("%d",&number);
	if(number%5==0){
		printf("%d chia het cho 5 "); 
	} else if(number%5!=0){
		printf("%d chia 5 du %d",number%5); 
	} 
} 
