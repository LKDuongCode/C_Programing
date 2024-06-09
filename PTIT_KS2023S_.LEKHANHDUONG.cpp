#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Contact
{
	int id;
	char name[50];
	char phone[12];
	char address[50];
	int status; 
};
void printMenu()
{
	printf("\n====================[MENU]====================\n");
	printf("1.In toan bo danh contact co trong mang contactList tren cung mot hang.\n");
	printf("2.Them moi contact vao vi tri cuoi cung.\n");
	printf("3.Cap nhat thong tin contact.\n");
	printf("4.Xoa motcontact.\n");
	printf("5.Sap xep va in ra danh sach Contact da sap xep.\n");
	printf("6.Tim kiem theo ten contact va in ra toan bo thong tin contact.\n");
	printf("7.Tim kiem theo status va in ra toan bo thong tin contact.\n");
	printf("8.Thoat.\n");
	printf("Lua chon cua ban la:");
}
void displayContact(struct Contact arr[],int sizeCln)
{
	for(int i=0;i<sizeCln;i++)
	{
		printf("Id: %d\t", arr[i].id);
        printf("Ten sinh vien: %s\t", arr[i].name);
        printf("So dien thoai: %s\t", arr[i].phone);
        printf("Dia chi: %s\t", arr[i].address);
        printf("Trang thai: %d\t", arr[i].status);
        printf("\n_____________________________\n");
        
	}
}
int searchStudent(struct Contact arr[], int sizeCln, char updateStdCln[100])
{
    int index = -1;
    for (int i = 0; i < sizeCln; i++)
    {
        if (strcmp(arr[i].name, updateStdCln) == 0)
        {
            index = i;
        }
    }
    return index;
}
int main ()
{
	struct Contact std1 = {147,"Hoang Minh B","0987654321","TP Ha Noi",1};
	struct Contact std2 = {876,"Nguyen Van A","0246813579","TP Hai Phong",0};
	struct Contact std3 = {666,"Nguyen Thi C","0123456789","TP Ho Chi Minh",1};
	
	struct Contact studentList[50] = {std1,std2,std3};
	int currentSize = 3;
	int updateIndex = 0;
	int deleteIndex = 0;
	int temp = 0;
	int searchStatus;
	
	do
	{
		printMenu();
		int choice;
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
			case 1:
				displayContact(studentList,currentSize);
				break;
			case 2:
				struct Contact addStd;
				printf("Nhap vao id cua sinh vien:\n");
				scanf("%d",&addStd.id);
				getchar();
				
				printf("Nhap vao ten sinh vien:\n");
                gets(addStd.name);
            
                
                printf("Nhap vao dia chi sinh vien:\n");
                gets(addStd.address);
                
                
                printf("Nhap vao so dien thoai sinh vien:\n");
                gets(addStd.phone);
                
                
                 printf("Nhap vao trang thai sinh vien:\n");
                scanf("%d",&addStd.status);
                getchar();
                
                studentList[currentSize] = addStd;
                currentSize++;
                
                displayContact(studentList,currentSize);
				break;
			case 3:
				char updateStd[100];
				printf("Nhap vao sinh vien muon chinh sua:");
				gets(updateStd);
				
				updateIndex = searchStudent(studentList, currentSize, updateStd);
				
				if (updateIndex != -1)
                {
                    printf("Nhap vao ten sinh vien cap nhat:\n");
                    gets(studentList[updateIndex].name);

                    printf("Nhap vao dia chi cap nhat:\n");
                    gets(studentList[updateIndex].address);

                    printf("Nhap vao trang thai cap nhat:\n");
                    scanf("%d", &studentList[updateIndex].status);
                    getchar();

                    displayContact(studentList, currentSize);
                }
				
				break;
			case 4:
				char deleteStd[100];
                printf("Nhap vao sinh vien muon xoa: \n");
                gets(deleteStd);

                deleteIndex = searchStudent(studentList, currentSize, deleteStd);

                if (deleteIndex != -1)
                {
                    for (int i = deleteIndex; i < currentSize; i++)
                    {
                        studentList[i] = studentList[i + 1];
                    }
                    currentSize--;
                    displayContact(studentList, currentSize);
                }
				break;
			case 5:
				for (int i = 0;i < currentSize; i++)
				{
					for (int j = 0;j<currentSize-i-1;j++)
					{
						if(studentList[j].id > studentList[j + 1].id)
						{
							temp = studentList[j].id;
							studentList[j].id = studentList[j+1].id;
							studentList[j+1].id = temp;
						}
					}
				}
				displayContact(studentList, currentSize);
				break;
			case 6:
    			printf("[!] Loi ki thuat, hoc vien chua lam duoc!!!");
				break;
			case 7:
          		searchStatus = 10;// mac dinh
    			printf("Nhap vao trang thai sinh vien (0 - Dang hoc, 1 - Dang nghi): ");
    			scanf("%d", &searchStatus);

    			printf("Thong tin sinh vien co trang thai %d:\n", searchStatus);
    			for (int i = 0; i < currentSize; i++)
    			{
        			if (studentList[i].status == searchStatus)
        			{
            			printf("Id: %d\t", studentList[i].id);
            			printf("Ten sinh vien: %s\t", studentList[i].name);
            			printf("So dien thoai: %s\t", studentList[i].phone);
            			printf("Dia chi: %s\t", studentList[i].address);
            			printf("Trang thai: %d\t", studentList[i].status);
            			printf("\n_____________________________\n");
        			}
    			}			
    			break;
			case 8:
				exit (0);
				break;
			default:
				printf("[!] Lua chon khong hop le.");
				break;
		}
	}
	while(1==1);
}
