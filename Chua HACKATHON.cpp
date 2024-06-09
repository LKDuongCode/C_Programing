#include<stdio.h>
#include<stdlib.h>
int main (){
	int numb = 0;// so phan tu trong mang
	int arr[100];
	int currentIndex = 0;
	int sumNumb, count;
	do{
		printf("\n===================MENU====================\n");
		printf("1. Nhap tu ban phim gia tri n so phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh trung binh cac phan tu duong (>0) trong mang.\n");
		printf("4. In ra vi tri cac phan tu co gia tri bang k trong mang (k nhap tu ban phim).\n");
		printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
		printf("6. Tinh so luong cac phan tu la so nguyen to trong mang.\n");
		printf("7. Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan\n");
		printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan) dung vi tri\n ");
		printf("9. Thoat.\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 1:// trong C khong the khai bao bien trong case cua switch case
				printf("Nhap so phan tu can nhap:");
				scanf("%d",&numb);
				printf("Nhap gia tri vao phan tu\n");
				for(int i=0;i<numb;i++){
					printf("arr[%d]= ", currentIndex);
					scanf("%d", &arr[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 3:
				printf("Trung binh cac phan tu duong trong mang la: ");
				sumNumb = 0;
				count = 0;
				for(int i=0;i<currentIndex;i++){
					if(arr[i]>0){
						sumNumb = sumNumb+arr[i];
						count++;
					}
				}
				printf("%d",sumNumb/count);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit (0);
			default:
				printf("Khong hop le, vui long chon lai tu 1-9");
		}
	} 
	while(1==1);
} 
