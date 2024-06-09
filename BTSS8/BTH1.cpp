#include<stdio.h>
int main (){
	int numbers[5];
	for (int i=0;i<5;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]); 
	} 
	printf("gia tri cac phan tu trong mang:");
	for (int i=0;i<5;i++){
		printf("%d\t",numbers[i]); 
	} 

} 
