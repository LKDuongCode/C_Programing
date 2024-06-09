#include<stdio.h>
int main(){//b1: khai bao number 
	int number;
	printf("Moi ngai nhap vao so nguyen chia het cho 3 va 5");// in ra yeu cau bai 
	scanf("%d",&number);// nhap so tu ban phim va gan vao number 
	if (number%3==0 && number%5==0){// xet dieu kien chia het cho 3 va 5 
		printf("%d chia het cho 3 va 5\n",number); 
	} else{
		printf("%d khong chia het cho 3 va 5",number); 
	} 
} 
