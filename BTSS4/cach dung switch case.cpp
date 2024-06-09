#include<stdio.h>// nhap vao mot so nguyen co gia tri tu 1 den 4 va phien am so do 
int main (){
	int number;
	printf("moi ngai nhap vao so nguyen tu 1 den 4: ");// nhap vao so nguyen
	scanf("%d",&number);
	// dung switch case
	switch(number){
		case 1:
			printf("so mot\n");
			break;
		case 2:
			printf("so hai\n");
			break;
		case 3:
			printf("so ba\n ");
			break;
		case 4:
			printf("so bon\n");
			break;
		default:
			printf("nhap sai");// neu nhap khong dung voi cac truong hop da luu thi se ra default.
			
	}
}
