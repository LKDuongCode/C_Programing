#include<stdio.h>
int main(){
	int number;
	printf("Moi ngai nhap vao so nguyen: \n");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("%d la so chia het cho 3 va 5 \n",number);
	}else{
		printf("%d la so khong chia het cho 3 va 5",number);
	}
}
