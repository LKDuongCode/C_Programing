#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	int numb = 0,isPrime = 0;// so phan tu trong mang
	int arr[100];
	int currentIndex = 0;
	int k,m, addIndex;
	float sumNumb, count;
	int start[100], mid[100], end[100];
    int startCount, midCount, endCount;
	do{
		printf("\n===================MENU====================\n");
		printf("1. Nhap tu ban phim gia tri n so phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh trung binh cac phan tu duong (>0) trong mang.\n");
		printf("4. In ra vi tri cac phan tu co gia tri bang k trong mang (k nhap tu ban phim).\n");
		printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
		printf("6. Tinh so luong cac phan tu la so nguyen to trong mang.\n");
		printf("7. Sap xep cac phan tu chan chia het cho 3 o dau mang /ntheo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan\n");
		printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan) dung vi tri\n");
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
				printf("%.2f",sumNumb/count);
				break;
			case 4:
				printf("Nhap gia tri can tim trong mang:");
				scanf("%d",&k);
				printf("Chi so cac gia tri bang k la: ");
				for(int i=0;i<currentIndex;i++){
					if(k == arr[i]){
						printf("arr[%d]\t",i);
					}
				}
				break;
			case 5:
				for(int i=0;i<currentIndex;i++){
					for(int j=0;j<currentIndex-i-1;j++){
						if(arr[j]< arr[j+1]){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}
					}
				}
				printf("Mang sau khi sap xep:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 6:
				count = 0;
				isPrime = 0; // =0 la so nguyen to
				for(int i=0;i<currentIndex;i++){
					if(arr[i]>=2){
						for(int j=2;j<=sqrt(arr[i]);j++){
							if(arr[i]%j == 0){
								isPrime = 1;// =1 thi khong phai so nguyen to
								break;
							}
						}
					}
					else{
						isPrime = 1;
					}
					if(isPrime == 0){// thi arr[i] la so nguyen to
					// 1-0 khong lien quan den 1-0 true false
						printf("%d\t",arr[i]);
						count++;
						
					}
				}
				printf("\nCo %d so nguyen to trong mang.",count);
				break;
			case 7:

            	break;
			case 8:
				printf("Nhap vao vi tri muon chen:");
				scanf("%d",&addIndex);
				printf("Nhap vao gia tri muon chen:");
				scanf("%d",&m);
				if(addIndex < 0){
					printf("Khong hop le, vui long nhap vi tri lon hon 0.");
				}
				else if(addIndex == currentIndex){
					arr[addIndex] = m;
					currentIndex++;
					printf("Mang sau khi them la:\n");// in ra
					for(int i=0;i<currentIndex;i++){
						printf("%d\t",arr[i]);
					}
				}
				else if(addIndex > currentIndex){
					for(int i=currentIndex; i<addIndex+1; i++){
						if(i<addIndex){
							arr[i] = 0;
						}
						if(i==addIndex){
							arr[i] = m;
						}
					}
					printf("Mang sau khi them:");
					for(int i=0;i<addIndex+1;i++){
						printf("%d\t",arr[i]);
					}
				}
				else {//addIndex < currentIndex
					// chay nguoc tu currentIndex+1 ve addIndex
					for(int i = currentIndex;i>addIndex;i--){
						arr[i] = arr[i-1]; // day ra sau
					}
					arr[addIndex] = m; // gan gia tri
					currentIndex++;
					printf("Mang sau khi them la:\n");// in ra
					for(int i=0;i<currentIndex;i++){
					printf("%d\t",arr[i]);
				}
				}
			
				break;
			case 9:
				exit (0);
			default:
				printf("Khong hop le, vui long chon lai tu 1-9");
		}
	} 
	while(1==1);
} 
