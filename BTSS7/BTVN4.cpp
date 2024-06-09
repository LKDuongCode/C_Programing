#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int sum = 0 , count = 0 , perfect_number = 0 , factorial = 1 , reverseNumber = 0 , remain , primeNumber;
	int n ;
	printf("nhap so nguyen n \n");
	scanf("%d",&n);

	do{
		printf("**********INTERGER NUMBER********** \n");
		printf("1. so nho hon n va tinh tong \n");
		printf("2. so nho hon n va chia het cho 3 \n");
		printf("3. kiem tra la so nguyen to \n");
		printf("4. kiem tra la so hoan hao \n");
		printf("5. tong cac uoc so n \n");
		printf("6. tinh giai thua n \n");
		printf("7. in so dao nguoc cua n \n");
		printf("8. in cac so nguyen to tu 1 - n \n");
		printf("9. thoat \n");
		
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i = 1 ; i < n ; i++){
					sum += i;
					printf("%d \t",i);
				}
				printf("tong cua day so la : %d \n", sum);
			break;
			case 2:
				for(int i = 0 ; i < n ; i++){
					if(i % 3 == 0){
						printf("%d \t",i);
					}
				}
				printf("\n");
			break;
			case 3:
				if(n < 2){
					printf("%d khong la so nguyen to \n",n);
				}else{
					for(int i = 2 ; i < sqrt(n) ; i ++){
						if(n % i == 0){
							count++;
						}
					}
					if(count == 0){
						printf("%d la so nguyen to \n",n);
					}else{
						printf("%d khong la so nguyen to \n",n);
					}
				}
			break;
			case 4:
				if(n < 0){
					printf("%d khong la so hoan hao \n",n);
				}else{
					for(int i = 1 ; i < n ; i++){
						if(n % i == 0){
							perfect_number += i;	
						}
					}
					if(perfect_number == n){
						printf("%d la so hoan hao \n",n);
					}else{
						printf("%d khong la so hoan hao \n",n);
					}
				}
			break;
			case 5:
				for(int i = 1 ; i <= n ; i++){
					if(n % i == 0){
						perfect_number += i;
					}
				}
				printf("tong uoc so cua n la %d \n",perfect_number);
			break;
			case 6:
				for(int i = 1 ; i <= n ; i++){
					factorial = factorial * i;
				}
				printf("giai thua cua %d la %d \n",n,factorial);
			break;
			case 7:
				while(n != 0){
					remain = n % 10;
					reverseNumber = reverseNumber * 10 + remain;
					n /= 10;
				}
				printf("so dao nguoc cua n la %d \n",reverseNumber);
			break;
			case 8:
				break;
			case 9:
				exit(0);
			default: 
				printf("vui long chon tu 1 - 9");
		}
	}while(1 == 1);
}
