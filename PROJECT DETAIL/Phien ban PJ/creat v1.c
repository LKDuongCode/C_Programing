#include<stdio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
void startEffect()
{
	// tao hieu ung vao ung dung 
	printf("\n\n\n\n\n\t\t\t\t\t\t  [EDU SYSTEM]\n");
	printf("\n\t\t\t\t\t\tLoading system....");
	sleep(0);
	printf("\033[H\033[J");// ma thoat
	
	printf("\n\n\n\n\n\t\t\t\t\t\tClick Enter to continue!");
	getchar();
	printf("\033[H\033[J");
}

void mainMenu()
{
	printf("\n\n\n\n\t\t\t\t====================[MENU]====================\n");
	printf("\t\t\t[1] Thong tin ve Global Soft.\n");
	printf("\t\t\t[2] Thong tin giang vien.\n");
	printf("\t\t\t[3] Thong tin hoc vien.\n");
	printf("\t\t\t[4] Tai nguyen hoc tap.\n");
	printf("\t\t\t[5] Thoat ung dung.\n");
	printf("\n\n\n\n\n\t\t\tYour choice is: ");
}

typedef struct // hien thi lua chon menu de tra cuu chuyen nganh
{
	int codeMajor;
	char majorName;
	char majorDescrible[200];
}major; 

void majorInfo() // thong tin tra cuu ve ma nganh 
{
	printf("\033[H\033[J");
	printf("\n\n\n\n\t\t\t\t====================[MAJOR INFORMATION]====================\n");
	printf("\t\t\t[101] Nganh khoa hoc may tinh.\n");
	printf("\t\t\t[025] Nganh cong nghe luat.\n");
	printf("\t\t\t[632] Nganh khoa hoc tam li.\n");
	printf("\t\t\t[666] Nganh cong nghe tam linh.\n");
	printf("\t\t\t[196] Nganh hang khong vu tru.\n");
	printf("\n\n\n\n\n\t\t\tYour choice is: ");
}
typedef struct // struct thong tin ca nhan hoc vien
{
	char stdName[50];
	char stdAdress[50];
	char stdEmail[50];
	char stdPhone[20];
}StdPrivate;
typedef struct // struct diem
{
	float mathScr;
	float engScr;
	float literatureScr;
}StdScr;

typedef struct // struct hoc vien
{
	int stdCode;
	StdPrivate;
	StdScr;
	int stdMajor;
	int status;
}StudentInfo;

typedef struct // struct thong tin ca nhan giang vien
{
	char tchrName[50];
	int tchrAge;
	char tchrEmail[50];
	char tchrAddress[50];
	char tchrPhone[20];
}teacherPrivate;
typedef struct // struct giang vien
{
	int tchrCode;
	teacherPrivate;
	int tchrMajor;
	int tchrStatus;
}teacherInfo;

// them giang vien
 

// ham main
int main()
{
	// bien dung trong case
	int select = 0;
	int curIndexStd = 3;
	int curIndexTeach = 2;
	const double difN = 0.00001; // hang so kiem tra su chenh lech giua hai so thuc.
	// cac choice
	float choiTchr;  
	
	// tao hieu ung
	startEffect();
	
	// thong tin khoi tao hoc vien 
	StudentInfo class1[1000] =
	{
		{
			1474,
			{"Nguyen Van A","TP Ha Noi","nguyenvana@gmail.com","0123123789"},
			{9.1,8.4,7.5},
			101,
			1
		},
		
		{
			2048,
			{"Hoang Van B","TP Vu Han","bbsocute@gmail.com","0978777444"},
			{10,6.2,7.3},
			196,
			0
		},
		
		{
			7878,
			{"Luong Vy Minh","TP Tokyo","wibulord@gmail.com","0033874595"},
			{9.2,9.6,9.8},
			666,
			1
		}
	};
	
	//thong tin khoi tao giang vien
	teacherInfo mySchool [1000] = 
	{
		{
			1114,
			{
				"Tran Minh Cuong",
				28,
				"thaycuongdz@gmail.com",
				"TP Ha Noi",
				"0978456456",
			},
			101,
			1
		},
		
		{
			3213,
			{
				"Nguyen Van Doan",
				20,
				"doanvippro@gmail.com",
				"TP Samsung",
				"0988223456",
			},
			666,
			0
		}
	};
	
	do
	{
		mainMenu();
		int choiMain;
		scanf("%d",&choiMain);
		getchar();
		switch(choiMain)
		{
			case 1:// in ra thong tin Global Soft
				
				printf("\n\n\n\n\t\t\t\t====================[GLOBAL SOFT INFORMATION]====================\n");
				
				FILE *globalSoft = NULL;
				char glbS[1000];
				globalSoft = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\Global Soft info.txt","r");
				
				if(globalSoft !=NULL)
				{
					while (fgets(glbS,1000,globalSoft) !=NULL)
					{
						printf("%s",glbS);	
					}
					fclose(globalSoft);
				}
				break;
			case 2: // thong tin giang vien
				printf("[2.1] In ra danh sach toan bo giang vien.\n");
				printf("[2.2] Them giang vien moi.\n");
				printf("[2.3] Sua thong tin giang vien.\n");
				printf("[2.4] Xoa thong tin giang vien.\n");
				printf("[2.5] Tim kiem giang vien.\n");
				printf("Lua chon cua ban la: ");
				
				choiTchr;
        		scanf("%f", &choiTchr);
        		// ham fabs tinh gia tri tuyet doi cua hai so.
        		if (fabs(choiTchr-2.1) < difN) 
				{
					 // In tieu de
        			printf("\n-----------------------------------------------------------------------------------------------------------\n");
        			printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-6s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "Nganh", "STA");
        			printf("------------------------------------------------------------------------------------------------------------\n");

        			// vong lap in danh sách
        			for (int i = 0; i < curIndexTeach; i++) 
					{
            			printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-6d | %-3d |\n", mySchool[i].tchrCode, mySchool[i].tchrName, mySchool[i].tchrAge, mySchool[i].tchrEmail, mySchool[i].tchrAddress, mySchool[i].tchrPhone, mySchool[i].tchrMajor, mySchool[i].tchrStatus);
            			printf("-----------------------------------------------------------------------------------------------------------\n");
        			}		
        			break;
        		}
				else if (fabs(choiTchr-2.2) < difN) 
				{
					printf("Moi nhap thong tin giang vien moi.\n");
					
					break;
        		} 
				else if (fabs(choiTchr-2.3) < difN)
				{
			
        		} 
				else if (fabs(choiTchr-2.4) < difN) 
				{
			
        		} 
				else if (fabs(choiTchr-2.5) < difN) 	
				{
					
        		}
				else 
				{
            		printf("\n\t\t\t[!] INVALID");
            		printf("\n\t\t\tPLEASE SELECT AGAIN...");
				}
			case 3:
				break;
			case 4:
				break;
			case 0:
				exit (0);
			default :
				printf("\n\t\t\t[!] INVALID");
				printf("\n\t\t\tPLEASE SELECT AGAIN...");
				
				break;
		}
	}
	while (1==1);
}
