#include<stdio.h>
int main(){
	printf("Moi ngai nhap vao so:");
	int numBer, sum, inverse;
	scanf("%d",&numBer);
	int thousandDigit=numBer/1000, hundredDigit=(numBer/100)%10, dozenDigit=(numBer/10)%10, unitDigit=numBer%10;
	sum=thousandDigit+hundredDigit+dozenDigit+unitDigit;
	inverse= (unitDigit*1000)+(dozenDigit*100)+(hundredDigit*10)+(thousandDigit);
	printf("Tong cua cac chu so la: %d",sum);
	printf( "\nSo nghich dao la:  %d",inverse);
	return 0;
	
}
