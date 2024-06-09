#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d",&m);
	int arr[n][m];
	int count;
	int sumNumber;
	int min;
	do{
		printf("\n====================MENU====================\n");
		printf("1. Nhap gia tri cac phan tu cua mang.\n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran.\n");
		printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang.\n");
		printf("4. In cac phan tu va tinh tong cac phan tu nam tren duong bien, duong cheo chinh, duong cheo phu.\n");
		printf("5. Su dung thuat toan sap xep lua chon, sap xep cac phan tu tang dan theo cot cua mang.\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang.\n");
		printf("7. Su dung thuat toan noi bot, sap xep cac phan tu tren duong cheo chinh cua mang giam dan.\n");
		printf("8. Nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu.\n");
		printf("9. Thoat.\n");
		int choice;
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("arr[%d][%d] = ",i,j);
						scanf("%d",&arr[i][j]);
					}
				}
				break;
			case 2:
				printf("Cac phan tu cua mang theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 3:
				count = 0;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(arr[i][j]%2 == 0 && arr[i][j]%3 == 0){
							count++;
						}
					}
				}
				printf("Co %d so phan tu trong mang chia het cho 2 va 3.",count);
				break;
			case 4:
				sumNumber = 0;
				printf("Cac phan tu nam tren duong bien:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j==0 || j==m-1){
							printf("%d\n",arr[i][j]);
							sumNumber = sumNumber+arr[i][j];
						}
					}
				}
				printf("Tong cac phan tu nam tren duong bien: %d\n",sumNumber);
				if (n == n){
					sumNumber = 0;
					printf("Cac phan tu nam tren duong cheo chinh la: ");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i==j){
								printf("%d\t",arr[i][j]);
								sumNumber = sumNumber+arr[i][j];
							}
						}
					}
					printf("\nTong cac phan tu nam tren duong cheo chinh la: %d",sumNumber);
					sumNumber = 0;
					printf("\nCac phan tu nam tren duong cheo phu la:");
						for(int i=0; i<n;i++){
							for(int j=0;j<m;j++){
								if(i+j == n-1){
									printf("%d\t",arr[i][j]);
									sumNumber = sumNumber+arr[i][j];
								}
							}
						}
						printf("\nTong cac phan tu tren duong cheo phu la: %d",sumNumber);
				}
				else{
					printf("Day khong phai ma tran hinh vuong nen khong co duong cheo chinh va duong cheo phu!");
				}
				break;
			case 5:
				for(int i=0;i<n;i++){
					for(int j=0;j<m-1;j++){
						min = j;
						for (int k = j + 1; k < n; k++) {
                			if (arr[k][i] < arr[min][i]) {
                        	min = k;
                			}
            			}
            			if (min != j) {
                			int temp = arr[j][i];
                			arr[j][i] = arr[min][i];
                			arr[min][i] = temp;
            			}
					}
				}
				printf("Mang sau khi sap xep:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",arr[i][j]);
					}
					printf("\n");
				}
				
				break;
			case 6:
				printf("Cac phan tu la so nguyen to trong mang 2 chieu la:");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						int isPrime = 0;
						if(arr[i][j]>=2){
							for(int a=2; a<= sqrt(arr[i][j]);a++){
								if(arr[i][j]%a == 0){
									isPrime = 1;
									break;
								}
							}
						}
						else{
							isPrime = 1;	
						}
						if(isPrime == 0){
							printf("%d \t",arr[i][j]);
						}
					}
				}
				break;
			case 7:
					for(int i=0;i<n;i++){
						for(int j=0;j<m-1;j++){
							
							}
						}
		
				break;
			case 8:
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Vui long nhap tu 1 den 9.");
		}
	}while(1==1);
}

