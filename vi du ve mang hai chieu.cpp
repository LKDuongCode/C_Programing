//khai bao mang hai chieu so nguyen 3 dong 4 cot
#include<stdio.h>
int main (){
	int numbers [3][4];
	// nhap gia tri cho ca phan tu cua mang number
	int counti,countj;
	for ( counti=0;counti<3;counti++){
		for ( countj=0;countj<3;countj++){
			printf("numbers[%d][%d]=",counti,countj);
			scanf("%d",&numbers[counti][countj]); 
		} 
	} 
	// in gia tri cac phan tu theo ma tran
	printf(" gia tri cac phan tu trong mang\n");
	for (counti=0;counti<3;counti++){
		for (countj=0;countj<4;countj++){
			printf("%d\t",numbers[counti][countj]); 
		} 
		printf("\n") 
	} 
	printf("\n"); 
} 
