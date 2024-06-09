#include<stdio.h>
struct Contact
{
	int id;
	char name[50];
	char phoneNumber[12];
	char address[50];
	int status;	
};
typedef struct Contact Contact;
void printMenu()
{
	printf("\n====================[MENU]====================\n");
	printf("1.In ra toan bo contact trong contactList tren cung mot hang.\n");
	printf("2.Them mot contact vao vi tri cuoi.\n");
	printf("3.Cap nhat thong tin contact.\n");
	printf("4.Xoa mot contact.\n");
	printf("5.Sap xep va in ra danh sach Contact da sap xep.\n");
	printf("6.Tim kiem theo ten contact va in ra toan bo thong tin contact.\n");
	printf("7.Tim kiem theo status va in ra toan bo thong tin contact.\n");
	printf("8.Thoat.\n");
	printf("Lua chon cua ban la:");
}
void displayContact(Contact arr[], int symSize)
{
	// duyet tu 0 den currentIndex
	for (int i=0, i<symSize;i++)
	{
		printf("ID: %d",)
	}
}

int main ()
{
	Contact sdt1 = {223,"Nguyen Van A","0888999777","TP Ha Noi",0};
	Contact std2 = {332,"Hoang Thi B","0123223333","TP Hai Phong",1};
	Contact std3 = {123,"Dang Duc C","0987666666","Quang Ninh",0};
	do
	{
		printMenu();
		int choice;
		scanf("%d",&choice);
		getchar();
		
		switch(choice)
		{
			case 1:
				
				break;
			case 2:
				break;
			case 3:
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
			default:
				printf("[!] Khong hop le! Nhap lai 1-9");
				break;
		}
	}
	while(1==1);
} 
