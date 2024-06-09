#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,count=0,sum;
	printf("Nhap n: ");
	scanf("%d",&n);
	do{
		printf("*****************PRACTICE*****************\n");
		printf("1. In day so chia het cho 2 va giam dan\n");
		printf("2. In cac so nho hon n va tinh tong\n");
		printf("3. In ra cac uoc so chan cua \n");
		printf("4. In ra cac so le va so luong cac uoc le cua n\n");
		printf("5. In ra so le lon nhat cua n\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(i=(int(n/2))*2;i>=2;i-=2){
					printf("%d\t",i);
				}
			    break;
			case 2:
				for(i=0;i<=n;i++){
					sum+=i;
					printf("%d\t",i);
				}
				printf("Tong cac so do la: %d\n",sum);
				break;
			case 3:
				for(i=1;i<=n;i++){
					if(i%2==0){
						printf("%d\t",i);
					    }
					}
				break;
			case 4:
				for(i=1;i<=n;i++){
					if(i%2==1){
						count+=1;
						printf("%d\t",i);
						}
					}
					printf("\n So luong cac uoc le cua %d la: %d\n",n,count);
				break;
			case 5:
				for (i = n; i >=1; i--){
                    if (n%2==1){
                        printf("%d\t",i);
                        break;
                   }
               }
               printf("Uoc so le lon nhat là %d\n",i);
               break;
			case 6:
				exit(choice);
			default:
				printf("Vui long chon tu 1 den 6: \n");
		}
	} while("Vui long chon tu 1 den 6: \n");
}
