#include<stdio.h>
int main(){
	int number;
	printf("Moi ngai nhap vao so nguyen");
	scanf("%d",&number);
	
	if (number%2==0){
		printf("%d day la so chan",number); 
	} else{
		printf("%d day la so le",number); 
	} 
} 
