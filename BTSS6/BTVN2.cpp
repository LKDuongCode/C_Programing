#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,gcDivitor,lcMutiple;
	int a=num1, b=num2;
	printf("Moi ngai nhap vao hai so nguyen:");
	scanf("%d %d",&num1,&num2);
	do{
		printf("				MENU				\n");
		printf("1. Tong\n");
		printf("2. Hieu\n");
		printf("3. Tich\n");
		printf("4. Thuong\n");
		printf("5. So du trong chia\n");
		printf("6. UCLN\n");
		printf("7. BCNN\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Tong cua 2 so la: %d\n",num1+num2);
				break;
			case 2:
				printf("Hieu cua hai so la: %d\n",num1-num2);
				break;
			case 3:
				printf("Tich cua hai so la: %d\n",num1*num2);
				break;
			case 4:
				printf("Thuong cua hai so la: %d\n",num1/num2);
				break;
			case 5:
				printf("So du trong phep chia cua hai so la: %d\n",num1%num2);
				break;
			case 6:
				while(num1!=num2){
					if(num1==num2){
						gcDivitor=num1;
						printf("UCLN cua hai so la: %d\n",gcDivitor);
					} if(num1>num2){
						num1 = num1 - num2;
					} else{
						num2 = num2 - num1;
					} 
					return num1;
					break;
			case 7:
				while(num1!=num2){
					if(num1==num2){
						gcDivitor=num1;
					    printf("BCNN cua hai so la: %d\n",a*b/gcDivitor);
					    break;
					if(num1>num2){
						num1 = num1 - num2;
					} else{
						num2 = num2 - num1;
					}
				}
				return num1;
				} 
			case 8:
				exit(choice);
			default:
				printf("moi ngai chon tu 1-8: \n");
			} 
		}
    } while("moi ngai chon tu 1-8: \n");
}
