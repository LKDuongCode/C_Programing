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
// tai khoan mat khau
typedef struct { // struct user
    char username[50];
    char password[50];
} User;
const int maxUser = 3; // quy dinh so tai khoan toi da

// dang ki
int signUp(User userList[], int *userCount) 
{
    char username[50];
    char password[50];

    printf("\n\n\n\n\n\t\t\t\t\tUSER NAME: ");
    scanf("%s", username);
    printf("\t\t\t\t\tPASSWORD: ");
    scanf("%s", password);
    
    
	
    // kiem tra nguoi dung da dang ki hay chua
    for (int i = 0; i < *userCount; i++) 
	{
		
        if (strcmp(userList[i].username, username) == 0) 
		{
            printf("\t\t\t\t\t[!] Username da ton tai!.\n");
            sleep(1.25);
            return 0;
        }
    }

    // Kiem tra so luong nguoi dung toi da hay chua
    if (*userCount >= maxUser) 
	{
        printf("\t\t\t\t\t[!] So luong tai khoan da dat toi da!\n");
        sleep(1.25);
        return 0;
    }

    // Luu thong tin nguoi dung vao danh sach
    strcpy(userList[*userCount].username, username);
    strcpy(userList[*userCount].password, password);
    (*userCount)++;
    
    

    printf("\t\t\t\t\t[+] Tai khoan da dang ki thanh cong!.\n");
    sleep(1.25);
    return 1;
}
// dang nhap
int loginUser(User userList[], int userCount) 
{
    char username[50];
    char password[50];

    printf("\t\t\t\t\tUSERNAME: ");
    scanf("%s", username);
    printf("\t\t\t\t\tPASSWORD: ");
    scanf("%s", password);

    // kiem tra thong tin dang nhap
    for (int i = 0; i < userCount; i++) 
	{
        if (strcmp(userList[i].username, username) == 0 && strcmp(userList[i].password, password) == 0) 
		{
            printf("\t\t\t\t\t[*] Dang nhap thanh cong!.\n");
            return 1;
        }
    }

    printf("\t\t\t\t\t[!] Username hoac Password khong chinh xac!.\n");
    sleep(1.5);
    return 0;
}

void mainMenu()
{
	printf("\n\n\n\n\t\t\t\t\t====================[MENU]====================\n");
	printf("\t\t\t\t\t[1] Thong tin ve Global Soft.\n");
	printf("\t\t\t\t\t[2] Thong tin giang vien.\n");
	printf("\t\t\t\t\t[3] Tai nguyen hoc tap.\n");
	printf("\t\t\t\t\t[0] Thoat ung dung.\n");

	printf("\n\n\n\n\n\t\t\t\t\tLua chon cua ban: ");
}

void teachMenu()
{
	printf("\n\t\t\t\t\t==========[TEACHERS INFORMATION]==========\n");
	printf("\t\t\t\t\t[2.1] In ra danh sach toan bo giang vien.\n");
	printf("\t\t\t\t\t[2.2] Them giang vien moi.\n");
	printf("\t\t\t\t\t[2.3] Sua thong tin giang vien.\n");
	printf("\t\t\t\t\t[2.4] Xoa thong tin giang vien.\n");
	printf("\t\t\t\t\t[2.5] Tim kiem giang vien.\n");
	printf("\t\t\t\t\t[2.6] Sap xep giang vien.\n");
	printf("\t\t\t\t\t[2.7] Quay lai.\n");
	printf("\t\t\t\t\tLua chon cua ban la: ");
}

void courseMenu()
{
	printf("\n\t\t\t\t\t==========[ COURSE INFO ]==========\n");
	printf("\n\t\t\t\t\t[3.1a] Thong tin toan bo khoa hoc.");
	printf("\n\t\t\t\t\t[3.1b] Them khoa hoc moi.");
	printf("\n\t\t\t\t\t[3.1c] Cap nhat khoa hoc.");
	printf("\n\t\t\t\t\t[3.1d] Xoa khoa hoc.");
	printf("\n\t\t\t\t\t[3.1e] Tim kiem khoa hoc.");
	printf("\n\t\t\t\t\t[3.1f] Sap xep khoa hoc.");
	printf("\n\t\t\t\t\t[3.1g] Quay lai.");
	printf("\n\t\t\t\t\tLua chon cua ban la:");
}

typedef struct // struct khoa hoc
{
	int courseId;
	char courseName[100];
	char cousrseType[50];
	char cousrsePrice[100];
	char cousrseTime[100];
	
}CourseInfo;

typedef struct // struct book
{
	int id;
	char bookName[100];
	char bookAuthor[50];
	char bookType[50];
	char bookStatus[20]; // mo - dong.(bao tri)
}BookInfo;

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
}TeacherInfo;

void printTeacher(TeacherInfo mySchool[], int curIndex) // in ds giang vien
{
    // In tieu de
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-8s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "MaNganh", "STA");
    printf("------------------------------------------------------------------------------------------------------------\n");

    // In danh sach
    for (int i = 0; i < curIndex; i++) {
        printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-8d | %-3d |\n", mySchool[i].tchrCode, mySchool[i].tchrName, mySchool[i].tchrAge, mySchool[i].tchrEmail, mySchool[i].tchrAddress, mySchool[i].tchrPhone, mySchool[i].tchrMajor, mySchool[i].tchrStatus);
        printf("-----------------------------------------------------------------------------------------------------------\n");
    }
}

// tim theo ten
int findByName( char* name,  TeacherInfo* teachers, int numTeachers)
{
    for (int i = 0; i < numTeachers; i++) {
        if (strcmp(teachers[i].tchrName, name) == 0) {
            return i;  
        }
    }
    return -1;// khong thay
}

// sap xep giang vien theo id - noi bot
void sortById(TeacherInfo mySchool[], int curIndex) 
{
    for (int i = 0; i < curIndex - 1; i++) {
        for (int j = 0; j < curIndex - i - 1; j++) {
            if (mySchool[j].tchrCode > mySchool[j + 1].tchrCode) {
                
                TeacherInfo temp = mySchool[j];
                mySchool[j] = mySchool[j + 1];
                mySchool[j + 1] = temp;
            }
        }
    }
}
// ham main
int main()
{
	// dang nhap dang ki
	User userList[maxUser];
	int userCount = 0;
	int choiUser;
	int loggedIn = 0;// chua dang nhap  
	
	while(1==1)
	{
		if (!loggedIn) 
		{     // kiem tra dung sai xem nguoi dung dang nhap hay chua 
			// tao hieu ung
			startEffect();
            printf("\n\n\n\n\n\n\n\t\t\t\t\t [1]. Dang ki tai khoan\n");
            printf("\n\t\t\t\t\t [2]. Dang nhap \n");
            printf("\n\t\t\t\t\t [3]. Thoat\n");
            printf("\n\t\t\t\t\t Lua chon cua ban: ");
            scanf("%d", &choiUser);
            getchar();

            switch (choiUser) 
			{
                case 1:
                    signUp(userList, &userCount);
                    
                    break;
                case 2:
                    loggedIn = loginUser(userList, userCount); 
                    break;
                case 3:
                
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t [ EDU SYSTEM HEN GAP LAI!.... ]\n");
                    return 0;
                default:
                    printf("\n\t\t\t\t\t[!] Lua chon khong hop le!.\n");
                    sleep(1.5);
            }
		}
		else // dang nhap thanh cong
		{
			// bien dung trong case
			int select = 0;
			int curIndexTeach = 2;		 
			// cac choice		
	
			//thong tin khoi tao giang vien
			TeacherInfo mySchool [1000] = 
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
	
			CourseInfo course [500] =
			{
				{
					123,
					"Lap trinh C",
					"Truc tiep",
					"3.000.000",
					"1 thang"
				},
				
				{
					456,
					"Tieng Anh Toeic",
					"Truc tiep",
					"Free",
					"3 thang"
				}
			};
			
			BookInfo book [500] =
			{
				{
					888,
					"God of war",
					"Unknow",
					"Than Thoai",
					"Mo"
				},
				
				{
					994,
					"Mat Biec",
					"Nguyen Nhat Anh",
					"Tieu Thuyet",
					"Dong"
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
						while(1==1)
						{
						
							teachMenu();
							char choiTchr[5]; 
		        			scanf("%s", choiTchr);
		        			getchar();
		        			
		        			if (strcmp(choiTchr,"2.1") == 0) 
							{
		        				printTeacher(mySchool,curIndexTeach);
		        			}
							else if (strcmp(choiTchr,"2.2") == 0) 
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
								
								printTeacher(mySchool,curIndexTeach);
								curIndexTeach++;
							
								
		        			} 
							else if (strcmp(choiTchr,"2.3") == 0)
							{
		    					printf("Nhap ten giang vien can cap nhat: ");
		    					char teacherName[50];
		    					fgets(teacherName, 50, stdin);
		    					teacherName[strcspn(teacherName, "\n")] = '\0';
		
		    					int upIndexTeach = findByName(teacherName, mySchool, curIndexTeach);
		    					if (upIndexTeach != -1) 
								{
		        			
		        					printf("Nhap thong tin cap nhat cho giang vien:\n");
		
		        					printf("Email: ");
		        					fgets(mySchool[upIndexTeach].tchrEmail, 50, stdin);
		        					mySchool[upIndexTeach].tchrEmail[strcspn(mySchool[upIndexTeach].tchrEmail, "\n")] = '\0';
		
		        					printf("Dia chi: ");
		        					fgets(mySchool[upIndexTeach].tchrAddress, 50, stdin);
		        					mySchool[upIndexTeach].tchrAddress[strcspn(mySchool[upIndexTeach].tchrAddress, "\n")] = '\0';
		
				        			printf("So dien thoai: ");
				        			fgets(mySchool[upIndexTeach].tchrPhone, 20, stdin);
				        			mySchool[upIndexTeach].tchrPhone[strcspn(mySchool[upIndexTeach].tchrPhone, "\n")] = '\0';
		
				        			printf("Trang thai: ");
				        			scanf("%d", &mySchool[upIndexTeach].tchrStatus);
				        			getchar();
		
		        					printf("\t\t\t\t\t[+] Da cap nhat thong tin giang vien %s thanh cong!\n",teacherName);
		        					printTeacher(mySchool,curIndexTeach);
		    					}
								else 
								{
		        				printf("\t\t\t\t\t[!]Khong tim thay giang vien.");
		        				} 
		        			}
							else if (strcmp(choiTchr,"2.4") == 0) 
							{
								printf("Nhap ten giang vien can xoa: ");
			    				char teacherName1[50];
			    				fgets(teacherName1, 50, stdin);
			    				teacherName1[strcspn(teacherName1, "\n")] = '\0';
			    				
			    				int delIndexTeach = findByName(teacherName1, mySchool, curIndexTeach);
		    					if (delIndexTeach != -1)
		    					{
		    						for(int i=delIndexTeach; i < curIndexTeach ; i++)
		    						{
		    							mySchool[i] = mySchool[i+1];
									}
									curIndexTeach--;
									printf("[-] Da xoa giang vien %s thanh cong!\n",teacherName1);
									printTeacher(mySchool,curIndexTeach);
								}	
								else 
								{
									printf("[!]  Khong tim thay giang vien %s !\n",teacherName1);
								}
		        			} 
							else if (strcmp(choiTchr,"2.5") == 0) 	
							{
								printf("Nhap ten giang vien can tim kiem:");
								char teacherName2[50];
								fgets(teacherName2,50,stdin);
								teacherName2[strcspn(teacherName2,"\n")] = '\0';
								
								int searchIndexTeach = findByName(teacherName2,mySchool,curIndexTeach);
								if(searchIndexTeach != -1)
								{
									printf("\n[*] Da tim thay giang vien %s !\n\n",teacherName2);
									printTeacher(mySchool,curIndexTeach);
								}
								else
								{
									printf("\n\t\t\t\t\t[!] Khong tim thay giang vien %s !\n\n",teacherName2);
								} 
								
		        			}
		        			
		        			else if (strcmp(choiTchr,"2.6") == 0)
		        			{
		        				sortById(mySchool,curIndexTeach);
		        				
		        				// in
		        				printTeacher(mySchool,curIndexTeach);
							}
							
							else if(strcmp(choiTchr,"2.7") == 0)
							{
								break;
							}
							else 
							{
			            		printf("\n\t\t\t[!] INVALID");
			            		printf("\n\t\t\tPLEASE SELECT AGAIN...");
							}
						}
						break; // thoat ra menu chinh
					case 3: // thong tin khoa hoc
					while(1==1)
					{
							
						printf("\n\t\t\t\t\t==========[LEARNING RESOURCES]==========\n");
						printf("\n\t\t\t\t\t[3.1] Khoa hoc.\n");
						printf("\n\t\t\t\t\t[3.2] Sach tham khao.\n");
						printf("\n\t\t\t\t\t[3.3] Quay lai.\n");
						printf("\n\t\t\t\t\t Lua chon cua ban:");
						char choiDoc[5];
						scanf("%s",choiDoc);
						getchar();
						
						if (strcmp(choiDoc,"3.1") == 0) 
						{
							while(1==1)
							{
								courseMenu();
								char choiCourse[5];
								scanf("%s",choiCourse);
								getchar();
								
								if(strcmp(choiCourse,"3.1a") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1b") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1c") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1d") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1e") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1f") == 0)
								{
									
								}
								else if(strcmp(choiCourse,"3.1g") == 0)
								{
									break;
								}
								else
								{
									printf("\n\t\t\t\t\t[!] Khong hop le.\n");
								}
								
							}
							
						}
						
						else if (strcmp(choiDoc,"3.2") == 0) 
						{
							
						}
						
						else if (strcmp(choiDoc,"3.3") == 0)
						{
							break;
						} 
						
						else 
						{
		            		printf("\n\t\t\t[!] INVALID");
		            		printf("\n\t\t\tPLEASE SELECT AGAIN...");
						}
					
						
					}
					break;
					case 4:
						printf("\n\n\n\n\n\n\n\t\t\t\t\t [ EDU SYSTEM HEN GAP LAI!.... ]\n");
						break; 
					default :
						printf("\n\t\t\t[!] INVALID");
						printf("\n\t\t\tPLEASE SELECT AGAIN...");
						
						break;
				}
			}
			while (1==1);
		}
	}
}
	
