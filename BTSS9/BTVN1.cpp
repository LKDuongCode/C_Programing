#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	// khai bao mang arr co 100 phan tu 
	// khoi tao chi so hien tai
	int currentIndex=0;
	int arr[100];
	// khai bao so phan tu va gia tri trong tung phan tu
	int numberE=0;
	int sum=0;
	int key;
	// khai bao max min
	int max,min;
	int divisor;
	// khai bao so nhap vao va thong ke
	int number,statistical;
	// khai bao vi tri can chen va gia tri chen
	int position,value;
	// dem cho case 8
	int a;
	do{
		// in danh sach de chon
		printf("=========================MENU=====================\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra cac phan tu co gia tri chan va tinh tong\n");
		printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
		printf("6.Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
		printf("7.Them 1 phan tu vao vi tri chi dinh\n");
		printf("8.Sap xep cac phan tu theo gia tri tang dan: ");
		printf("9.Thoat\n");
		int choose;
		printf("Lua chon cua ban: ");
		scanf("%d",&choose);
		switch(choose){
			//1. Nhap so phan tu can nhap va gia tri cac phan tu
			case 1:// trong C khong the khai bao bien trong case cua switch case
				printf("Nhap so phan tu can nhap: ");
				scanf("%d",&numberE);
				printf("Nhap gia tri vao phan tu\n");
				for(int i=0;i<numberE;i++){
					printf("arr[%d]= ", currentIndex);
					scanf("%d", &arr[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Cac gia tri co trong mang la: ");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");// sa ukhi xong thi xuong dong
				break;
			case 3:
				sum = 0;
				printf("Cac gia tri chan trong mang la:");
				for(int i=0;i<currentIndex;i++){
					if(arr[i]%2 == 0){
						printf("%d\t",arr[i]);
						sum = sum + arr[i];	
					}
				}
				printf("\n");
				printf("Tong cac gia tri chan la: %d\n",sum);
				break;
			case 4:
				max = arr[0];
				min = arr[0];
				for(int i=1; i<currentIndex; i++){// i = 1 thi se khong mat 1 vong lap so sanh 0 voi 0
					if(max<arr[i]){
						max=arr[i];
					}
					if (min>arr[i]){
						min=arr[i];
					}
				}
				printf("\n");
				printf("So lon nhat trong mang la: %d\n",max);
				printf("So nho nhat trong mang la: %d\n",min);
				break;
			case 5:
				printf ("cac so nguyen to trong mang:");
				sum = 0;
				for ( int i = 0; i < currentIndex ; i++){
					// kiem tra arr[i] co phai so nguyen to khong
					int isPrime = 0; // 0 la so nguyen to - 1 khong phai la so nguyen to
					if ( arr[i] >= 2){
						// kiem tra uoc
						for (int j = 2; j<= sqrt(arr[i]); j++){
							if (arr[i] % j==0){
								// j la uoc cua arr[i]
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime = 1;
					}
					if ( isPrime == 0){
						// arr[i] la so nguyen to
						printf ("%d \t ", arr[i]);
							
					}
				}
				break;
			case 6:
				printf("Nhap vao mot so: ");// nhap vao so de thong ke trong mang
				scanf("%d",&number);
				statistical=0;
				for(int i=0;i<currentIndex;i++){
					if(arr[i] == number){
						statistical++;
					}
				}
				printf("Co %d phan tu co gia tri bang %d\n",statistical,number);
				break;
			case 7:// quyet dinh tren 80 diem trong hackaton
				printf("Nhap vao vi tri muon chen: ");
				scanf("%d",&position);
				if(position<0 || position>= 99){
					printf("Khong hop le/n");// khong the chen chi so 0 va lon hon 100
					if ( position == currentIndex){
					arr[currentIndex] = value;
					currentIndex++;
					}		
					
				}
				else if(position>currentIndex){
					printf("Nhap gia tri muon chen: \n");
					scanf("%d",&value);
					currentIndex+=position-currentIndex;				
					printf("Cac gia tri sau khi them phan tu la: \n");
					for(int i=0;i<currentIndex;i++){
						printf("%d\t",arr[i]);
					}
				}
				else{
					printf("Nhap gia tri muon chen: ");
                    scanf("%d", &value);
                // chay nguoc tu curenIndex +1 ve position
                    for (int i = currentIndex; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    // gan gia tri
                    arr[position] = value;
                    // tang 
                    currentIndex++;
                    printf("Cac gia tri sau khi them phan tu la: ");
                    for (int i = 0; i < currentIndex; i++) {
                        printf("%d\t", arr[i]);
                    }
                    printf("\n");
                }
                break;
			case 8:
				printf("cac phan tu trong mang theo gia tri tang dan la:");
				for(int i = 0; i<numberE ; i++){
					key = arr[i];
					a = i-1;
					while( a>=0 && arr[a]>key){
						arr[a+1] = arr[a];
						a = a - 1;
					}
					arr[a+1] = key;
				}
				for ( int i = 0; i<numberE; i++){
					printf("%d\t",arr[i]);
				}
				
			case 9:
				exit(0);
			default:
				printf("Khong hop le, vui long chon lai tu 1-8");				
		}
	}while(1==1);
}
