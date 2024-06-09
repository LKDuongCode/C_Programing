#include<stdio.h>
void caculateAB(int *x,int *y)// co cach nao de lay tong va hieu tu ham nay truyen lai va in ra trong main?
{
	int dif = *x - *y;
	printf("\nHieu a,b bang: %d\n", dif);
	int sum = *x + *y;
	printf("Tong a,b bang: %d", sum);
}
void swapAB(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 10;
	int b = 5; // khai bao hai bien so nguyen
	// tinh tong va hieu luc chua doi cho
	caculateAB(&a,&b);
	// doi cho
	swapAB(&a,&b);
	// tinh lai 
	caculateAB(&a,&b);
	
}
