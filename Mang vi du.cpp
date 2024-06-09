#include<stdio.h>
int main (){
	// khai bao mang so nguyen gom 5 phan tu
	int numbers[5];
	// khai bao va khoi tao mang mot chieu so thuc có cac gia tri la 3.4 , 7.2 ,9.1 
	float arrFloat[3]={3.4,7.2,9.1};
	// khai bao mang so nguyen gom 4 phan tu trong do có 2 gia tri dau la -3 , 8 
	int arrInt[4]={-3,8};
	// in ra gia tri cac phan tu cua mang tren
	for(int i=0;i<4;i++){
		printf("%d",arrInt[i]);
		 
	} printf("\n") ;
	// su dung vong lap nhap gia tri cho cac phan tu mang 
	for (int i=0;i<5;i++){
		printf(" %d",numbers[i]) 
	} // tinh tong cac phan tu cua mang numbers
	int sum=0;
	for (i=0;i<5;i++){
		sum=sum+numbers[i];
		printf(" tong gia tri cac phan tu trong mang nubers: %d\n",sum); 
	} 
} 
 
