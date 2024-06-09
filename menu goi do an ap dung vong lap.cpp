// in ra menu cua mot cua hang an sang the hien cuoc song cua sinh vien
// 1.pho bo kobe
// 2.pho ga vietnam
// 3. xoi trung thit
// 5. banh mi pate
// 6. mi tom khong nguoi lai
// 7. thoat
// su lua chon cua ban
#include<stdio.h>
int main (){
	int choice;
	do{
		printf(" 			MENU			\n");
		printf("1.pho bo kobe\n2.pho ga viet nam\n3. xoi trung thit\n4.banh my pate\n");
		
		scanf("%d",choice);
		switch (choice){
			case 1:
				printf("ban vua chon pho bo kobe\n");
				break;
			case 2:
				printf("ban vua chon pho ga viet nam\n");
				break; 
			case 3:
				printf("ban vua chon xoi trung thit\n ");
				break;
			case 4:
				printf("ban vua chon banh my pate");
				break;
			default:
				printf("vui long chon lai mon!");
		}
	}while(choice==1);
}
