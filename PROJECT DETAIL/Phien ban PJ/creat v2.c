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
int findTeacherByName(const char* name, const teacherInfo* teachers, int numTeachers) {
    for (int i = 0; i < numTeachers; i++) {
        if (strcmp(teachers[i].tchrName, name) == 0) {
            return i;  // Tr? v? ch? s? c?a gi?ng viên n?u t?m th?y
        }
    }
    return -1;  // Tr? v? -1 n?u không t?m th?y
}

// ham main
int main()
{
	// bien dung trong case
	int select = 0;
	int curIndexStd = 3;
	int curIndexTeach = 2;
	const double difN = 0.00001; // hang so kiem tra su chenh lech giua hai so thuc.
	int updateIndex = 0;
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
				
        		scanf("%f", &choiTchr);
        		getchar();
        		// ham fabs tinh gia tri tuyet doi cua hai so.
        		if (fabs(choiTchr-2.1) < difN) 
				{
					 // In tieu de
        			printf("\n-----------------------------------------------------------------------------------------------------------\n");
        			printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-8s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "MaNganh", "STA");
        			printf("------------------------------------------------------------------------------------------------------------\n");

        			// vong lap in danh sách
        			for (int i = 0; i < curIndexTeach; i++) 
					{
            			printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-8d | %-3d |\n", mySchool[i].tchrCode, mySchool[i].tchrName, mySchool[i].tchrAge, mySchool[i].tchrEmail, mySchool[i].tchrAddress, mySchool[i].tchrPhone, mySchool[i].tchrMajor, mySchool[i].tchrStatus);
            			printf("-----------------------------------------------------------------------------------------------------------\n");
        			}		
        			break;
        		}
				else if (fabs(choiTchr-2.2) < difN) 
				{
				
					printf("Moi nhap thong tin giang vien moi.\n");
					
					printf("Ma giang vien:");
					scanf("%d",&mySchool[curIndexTeach].tchrCode);
					getchar();
					// su dung ham strcspn(*char1,*char2); de xoa \n---> in se ko loi. 
					// strcspn de tim kiem vi tri dau tien trong chuoi,char2 la chuoi muon tim trong char1.
					// neu trong char1 khong co char2 thi ham se tra ve gt = do dai char1.
					printf("Ten giang vien:");
					fgets(mySchool[curIndexTeach].tchrName,50,stdin);
					mySchool[curIndexTeach].tchrName[strcspn(mySchool[curIndexTeach].tchrName,"\n")] = '\0';
					
					printf("Tuoi:");
					scanf("%d",&mySchool[curIndexTeach].tchrAge);
					getchar();
					
					printf("Email:");
					fgets(mySchool[curIndexTeach].tchrEmail,50,stdin);
					mySchool[curIndexTeach].tchrEmail[strcspn(mySchool[curIndexTeach].tchrEmail,"\n")] = '\0';
					
					printf("Dia chi:");
					fgets(mySchool[curIndexTeach].tchrAddress,50,stdin);
					mySchool[curIndexTeach].tchrAddress[strcspn(mySchool[curIndexTeach].tchrAddress,"\n")] = '\0';
					
					printf("So dien thoai:");
					fgets(mySchool[curIndexTeach].tchrPhone,20,stdin);
					mySchool[curIndexTeach].tchrPhone[strcspn(mySchool[curIndexTeach].tchrPhone,"\n")] = '\0';
					
					printf("Ma nganh:");
					scanf("%d",&mySchool[curIndexTeach].tchrMajor);
					getchar();					
					printf("Trang thai:");
					scanf("%d",&mySchool[curIndexTeach].tchrStatus);
					getchar();
					
					printf("[+] Da them giang vien thanh cong!");
					 // In tieu de
        			printf("\n-----------------------------------------------------------------------------------------------------------\n");
        			printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-8s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "MaNganh", "STA");
        			printf("------------------------------------------------------------------------------------------------------------\n");
					curIndexTeach++;
        			// vong lap in danh sách
        			for (int i = 0; i < curIndexTeach; i++) 
					{
            			printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-8d | %-3d |\n", mySchool[i].tchrCode, mySchool[i].tchrName, mySchool[i].tchrAge, mySchool[i].tchrEmail, mySchool[i].tchrAddress, mySchool[i].tchrPhone, mySchool[i].tchrMajor, mySchool[i].tchrStatus);
            			printf("-----------------------------------------------------------------------------------------------------------\n");
        			}		
					
					
					break;
        		} 
				else if (fabs(choiTchr-2.3) < difN)
				{
    				printf("Nhap ten giang vien can cap nhat: ");
    				char teacherName[50];
    				fgets(teacherName, 50, stdin);
    				teacherName[strcspn(teacherName, "\n")] = '\0';

    				int teacherIndex = findTeacherByName(teacherName, mySchool, curIndexTeach);
    				if (teacherIndex != -1) {
        			
        			printf("Nhap thong tin cap nhat cho giang vien:\n");

        			printf("Tuoi: ");
        			scanf("%d", &mySchool[teacherIndex].tchrAge);
        			getchar();

        			printf("Email: ");
        			fgets(mySchool[teacherIndex].tchrEmail, 50, stdin);
        			mySchool[teacherIndex].tchrEmail[strcspn(mySchool[teacherIndex].tchrEmail, "\n")] = '\0';

        			printf("Dia chi: ");
        			fgets(mySchool[teacherIndex].tchrAddress, 50, stdin);
        			mySchool[teacherIndex].tchrAddress[strcspn(mySchool[teacherIndex].tchrAddress, "\n")] = '\0';

        			printf("So dien thoai: ");
        			fgets(mySchool[teacherIndex].tchrPhone, 20, stdin);
        			mySchool[teacherIndex].tchrPhone[strcspn(mySchool[teacherIndex].tchrPhone, "\n")] = '\0';

        			printf("Ma nganh: ");
        			scanf("%d", &mySchool[teacherIndex].tchrMajor);
        			getchar();

        			printf("Trang thai: ");
        			scanf("%d", &mySchool[teacherIndex].tchrStatus);
        			getchar();

        			printf("[+] Da cap nhat thong tin giang vien thanh cong!\n");
    				}
					else 
					{
        			printf("Khong tim thay giang vien");
        			} 
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
