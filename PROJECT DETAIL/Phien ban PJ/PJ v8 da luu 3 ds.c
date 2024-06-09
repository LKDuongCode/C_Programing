#include<stdio.h> 
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
// tai khoan mat khau
typedef struct {  // struct user
    char username[50];
    char password[50];
} User;

typedef struct //struct book
{
	int bookId;
	char bookName[100];
	char bookAuthor[50];
	char bookType[50];
	char bookStatus[20]; // mo - dong.(bao tri)
}BookInfo;


typedef struct // struct khoa hoc
{
	int courseId;
	char courseName[100];
	char cousrseType[50];
	char cousrsePrice[100];
	char cousrseTime[100];
	
}CourseInfo;

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

void startEffect();
int signUp(User userList[], int *userCount);
int loginUser(User userList[], int userCount);
const int maxUser = 3; // quy dinh so tai khoan toi da

// ham in menu
void mainMenu();
void teachMenu();
void courseMenu();
void bookMenu();

// ham tinh nang khoa hoc
void printCourse(CourseInfo courses[], int courseIndex);
void addCourse(CourseInfo courses[], int *courseIndex);
void updateCourse(CourseInfo courses[], int courseIndex);
void deleteCourse(CourseInfo courses[], int *numCourses);
void searchCourse(CourseInfo courses[], int courseIndex);
void sortCourse(CourseInfo courses[], int courseIndex);

//ham tinh nang sach
void printBook(BookInfo bookList[], int bookIndex); 

//ham tinh nang giang vien
void printTeacher(TeacherInfo mySchool[], int curIndex);
int findByTeachName( char* name,  TeacherInfo* teachers, int numTeachers);
void sortTeachById(TeacherInfo mySchool[], int curIndex);


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
			int curIndexTeach = 0;
			int curIndexCourse = 0;	
			int curIndexBook = 0;	 
			// cac choice		
	
			//doc thong tin giang vien
			TeacherInfo mySchool [500]; 
			FILE *tchrFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\TeacherInfo.bin", "rb");
			if (tchrFile== NULL) 
			{
        		printf("\nfailed!");
        		return 0;
    		}
    
    		while (fread(&mySchool[curIndexTeach], sizeof(TeacherInfo), 1, tchrFile) == 1) 
			{
        		curIndexTeach++;
    		}
    		fclose(tchrFile);
    		
    		// doc thong tin khoa hoc
			CourseInfo courseList [200];
	
			FILE *courseFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\CourseInfo.bin", "rb");
			if (courseFile == NULL) 
			{
        		printf("\nfailed!");
        		return 0;
    		}
    
    		while (fread(&courseList [curIndexCourse], sizeof(CourseInfo), 1, courseFile) == 1) 
			{
        		curIndexCourse++;
    		}
    		fclose(courseFile);	
			
			// doc thong tin sach
			BookInfo bookList [500];
			
			FILE *bookFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\BookInfo.bin", "rb");
			if (bookFile == NULL) 
			{
		        printf("\nfailed!");
		        return 0;
		    }
		    
		    while (fread(&bookList [curIndexBook], sizeof(BookInfo), 1, bookFile) == 1) {
		        curIndexBook++;
		    }
		    fclose(bookFile);	
			
			
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
		
		    					int upIndexTeach = findByTeachName(teacherName, mySchool, curIndexTeach);
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
			    				
			    				int delIndexTeach = findByTeachName(teacherName1, mySchool, curIndexTeach);
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
								
								int searchIndexTeach = findByTeachName(teacherName2,mySchool,curIndexTeach);
								if(searchIndexTeach != -1)
								{
									printf("\n[*] Da tim thay giang vien %s !\n\n",teacherName2);
									
									
								    printf("\n-----------------------------------------------------------------------------------------------------------\n");
								    printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-8s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "MaNganh", "STA");
								    printf("------------------------------------------------------------------------------------------------------------\n");
								    
								    printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-8d | %-3d |\n", mySchool[searchIndexTeach].tchrCode, mySchool[searchIndexTeach].tchrName, mySchool[searchIndexTeach].tchrAge, mySchool[searchIndexTeach].tchrEmail, mySchool[searchIndexTeach].tchrAddress, mySchool[searchIndexTeach].tchrPhone, mySchool[searchIndexTeach].tchrMajor, mySchool[searchIndexTeach].tchrStatus);
       								printf("-----------------------------------------------------------------------------------------------------------\n");
								    
								}
								else
								{
									printf("\n\t\t\t\t\t[!] Khong tim thay giang vien %s !\n\n",teacherName2);
								} 
								
		        			}
		        			
		        			else if (strcmp(choiTchr,"2.6") == 0)
		        			{
		        				sortTeachById(mySchool,curIndexTeach);
		        				
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
									printCourse(courseList,curIndexCourse);
								}
								else if(strcmp(choiCourse,"3.1b") == 0)
								{
									addCourse(courseList,&curIndexCourse);
								}
								else if(strcmp(choiCourse,"3.1c") == 0)
								{
									updateCourse(courseList,curIndexCourse);
								}
								else if(strcmp(choiCourse,"3.1d") == 0)
								{
									deleteCourse(courseList,&curIndexCourse);
								}
								else if(strcmp(choiCourse,"3.1e") == 0)
								{
									searchCourse(courseList,curIndexCourse);
								}
								else if(strcmp(choiCourse,"3.1f") == 0)
								{
									sortCourse(courseList,curIndexCourse);
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
							while(1==1)
							{
								bookMenu();
								char choiBook[5];
								scanf("%s",choiBook);
								
								if(strcmp(choiBook,"3.2a") == 0)
								{
									printBook(bookList,curIndexBook);
								}
								else if(strcmp(choiBook,"3.2b") == 0)
								{
									
								}
								else if(strcmp(choiBook,"3.2c") == 0)
								{
									
								}
								else if(strcmp(choiBook,"3.2d") == 0)
								{
									
								}
								else if(strcmp(choiBook,"3.2e") == 0)
								{
									
								}
								else if(strcmp(choiBook,"3.2f") == 0)
								{
									
								}
								else if(strcmp(choiBook,"3.2g") == 0)
								{
									break;
								}
								else
								{
									printf("\n\t\t\t\t\t[!] Khong hop le.\n");
								}
								
							}
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

void bookMenu()
{
	printf("\n\t\t\t\t\t==========[ BOOKS INFO ]==========\n");
	printf("\n\t\t\t\t\t[3.2a] Thong tin toan bo sach.");
	printf("\n\t\t\t\t\t[3.2b] Them sach moi.");
	printf("\n\t\t\t\t\t[3.2c] Cap nhat sach.");
	printf("\n\t\t\t\t\t[3.2d] Xoa sach.");
	printf("\n\t\t\t\t\t[3.2e] Tim kiem sach.");
	printf("\n\t\t\t\t\t[3.2f] Sap xep sach.");
	printf("\n\t\t\t\t\t[3.2g] Quay lai.");
	printf("\n\t\t\t\t\tLua chon cua ban la:");
}


// in khoa hoc
void printCourse(CourseInfo courses[], int courseIndex) 
{
   
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("| %-6s | %-30s | %-15s | %-15s | %-15s |\n", "ID", "Ten khoa hoc", "Loai khoa hoc", "Gia tien", "Thoi gian");
    printf("------------------------------------------------------------------------------------------------------------\n");

    
    for (int i = 0; i < courseIndex; i++) 
	{
        printf("| %-6d | %-30s | %-15s | %-15s | %-15s |\n", courses[i].courseId, courses[i].courseName, courses[i].cousrseType, courses[i].cousrsePrice, courses[i].cousrseTime);
        printf("------------------------------------------------------------------------------------------------------------\n");
    }
}

// them khoa hoc
void addCourse(CourseInfo courses[], int *courseIndex) 
{
    printf("Nhap thong tin cho khoa hoc moi:\n");
	
	printf("ID: ");
    scanf("%d",&courses[*courseIndex].courseId );
    getchar();

    printf("Ten khoa hoc: ");
    fgets(courses[*courseIndex].courseName, 100, stdin);
    courses[*courseIndex].courseName[strcspn(courses[*courseIndex].courseName, "\n")] = '\0';

    printf("Loai khoa hoc: ");
    fgets(courses[*courseIndex].cousrseType, 50, stdin);
    courses[*courseIndex].cousrseType[strcspn(courses[*courseIndex].cousrseType, "\n")] = '\0';

    printf("Gia tien: ");
    fgets(courses[*courseIndex].cousrsePrice, 100, stdin);
    courses[*courseIndex].cousrsePrice[strcspn(courses[*courseIndex].cousrsePrice, "\n")] = '\0';

    printf("Thoi gian hoc: ");
    fgets(courses[*courseIndex].cousrseTime, 100, stdin);
    courses[*courseIndex].cousrseTime[strcspn(courses[*courseIndex].cousrseTime, "\n")] = '\0';

    (*courseIndex)++;

    printf("[+] Them khoa hoc moi thanh cong!\n");
    
    printCourse(courses, *courseIndex);

}
// in giao vien
void printTeacher(TeacherInfo mySchool[], int curIndex) // in ds giang vien
{
    // In tieu de
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("| %-4s | %-15s | %-4s | %-25s | %-10s | %-15s | %-8s | %-3s |\n", "ID", "Ten", "Tuoi", "Email", "Dia chi", "So dien thoai", "MaNganh", "STA");
    printf("------------------------------------------------------------------------------------------------------------\n");

    // In danh sach
    for (int i = 0; i < curIndex; i++) 
	{
        printf("| %-4d | %-15s | %-4d | %-25s | %-10s | %-15s | %-8d | %-3d |\n", mySchool[i].tchrCode, mySchool[i].tchrName, mySchool[i].tchrAge, mySchool[i].tchrEmail, mySchool[i].tchrAddress, mySchool[i].tchrPhone, mySchool[i].tchrMajor, mySchool[i].tchrStatus);
        printf("-----------------------------------------------------------------------------------------------------------\n");
    }
}

// tim theo ten
int findByTeachName( char* name,  TeacherInfo* teachers, int numTeachers)
{
    for (int i = 0; i < numTeachers; i++) 
	{
        if (strcmp(teachers[i].tchrName, name) == 0) 
		{
            return i;  
        }
    }
    return -1;// khong thay
}

// sap xep giang vien theo id - noi bot
void sortTeachById(TeacherInfo mySchool[], int curIndex) 
{
    for (int i = 0; i < curIndex - 1; i++) 
	{
        for (int j = 0; j < curIndex - i - 1; j++) 
		{
            if (mySchool[j].tchrCode > mySchool[j + 1].tchrCode) 
			{
                
                TeacherInfo temp = mySchool[j];
                mySchool[j] = mySchool[j + 1];
                mySchool[j + 1] = temp;
            }
        }
    }
}

// cap nhat khoa hoc
void updateCourse(CourseInfo courses[], int courseIndex) // cap nhat khoa hoc
{
    printf("Nhap ID khoa hoc can cap nhat: ");
    int courseId;
    scanf("%d", &courseId);
    getchar();

    int index = -1;
    for (int i = 0; i < courseIndex; i++) 
	{
        if (courses[i].courseId == courseId) 
		{
            index = i;
            break;
        }
    }

    if (index != -1) 
	{
        printf("Nhap thong tin cap nhat cho khoa hoc:\n");

        printf("Ten khoa hoc: ");
        fgets(courses[index].courseName, 100, stdin);
        courses[index].courseName[strcspn(courses[index].courseName, "\n")] = '\0';

        printf("Loai khoa hoc: ");
        fgets(courses[index].cousrseType, 50, stdin);
        courses[index].cousrseType[strcspn(courses[index].cousrseType, "\n")] = '\0';

        printf("Gia tien: ");
        fgets(courses[index].cousrsePrice, 100, stdin);
        courses[index].cousrsePrice[strcspn(courses[index].cousrsePrice, "\n")] = '\0';

        printf("Thoi gian hoc: ");
        fgets(courses[index].cousrseTime, 100, stdin);
        courses[index].cousrseTime[strcspn(courses[index].cousrseTime, "\n")] = '\0';

        printf("[+] Cap nhat thong tin khoa hoc thanh cong!\n");

        // In danh sách sau khi c?p nh?t
        printCourse(courses, courseIndex);
    }
	else 
	{
        printf("[!] Khong tim thay khoa hoc voi ID %d!\n", courseId);
    }
}

//xoa khoa hoc
void deleteCourse(CourseInfo courses[], int *numCourses)  // xoa khoa hoc
{
    printf("Nhap ID khoa hoc can xoa: ");
    int courseId;
    scanf("%d", &courseId);
    getchar();

    int index = -1;
    for (int i = 0; i < *numCourses; i++) 
	{
        if (courses[i].courseId == courseId) {
            index = i;
            break;
        }
    }

    if (index != -1) 
	{
        for (int i = index; i < *numCourses - 1; i++) 
		{
            courses[i] = courses[i + 1];
        }

        (*numCourses)--;

        printf("[-] Xoa khoa hoc thanh cong!\n");

        
        printCourse(courses, *numCourses);
    } else {
        printf("[!] Khong tim thay khoa hoc voi ID %d!\n", courseId);
    }
}

//tim khoa hoc
void searchCourse(CourseInfo courses[], int courseIndex) // tim kiem khoa hoc
{
    int courseId;
    printf("Nhap ID khoa hoc can tim: ");
    scanf("%d", &courseId);

    int found = 0; 

    for (int i = 0; i < courseIndex; i++) 
	{
        if (courses[i].courseId == courseId) 
		{
            // neu tim thay
            if (!found) 
			{
                printf("\n[*] Tim thay khoa hoc:\n");
                found = 1;
            }
            printf("\n------------------------------------------------------------------------------------------------------------\n");
    		printf("| %-6s | %-30s | %-15s | %-15s | %-15s |\n", "ID", "Ten khoa hoc", "Loai khoa hoc", "Gia tien", "Thoi gian");
    		printf("------------------------------------------------------------------------------------------------------------\n");
            printf("| %-6d | %-30s | %-15s | %-15s | %-15s |\n", courses[i].courseId, courses[i].courseName, courses[i].cousrseType, courses[i].cousrsePrice, courses[i].cousrseTime);
            printf("------------------------------------------------------------------------------------------------------------\n");
        }
    }

    // khong tim thay 
    if (!found) 
	{
        printf("\n[!] Khong tim thay khoa hoc nao voi ID %d.\n", courseId);
    }
}

// sap xep khoa hoc
void sortCourse(CourseInfo courses[], int courseIndex) 
{
    for (int i = 0; i < courseIndex - 1; i++) 
	{
        int minIndex = i;
        for (int j = i + 1; j < courseIndex; j++) 
		{
            
            if (strcmp(courses[j].courseName, courses[minIndex].courseName) < 0) //ben nao co nhieu chu xep dau hon thi dung dau
			{
                minIndex = j;
            }
        }

        if (minIndex != i) 
		{
            CourseInfo temp = courses[i];
            courses[i] = courses[minIndex];
            courses[minIndex] = temp;
        }
    }

    
    printCourse(courses, courseIndex);
}
// in sach
void printBook(BookInfo book[], int bookIndex) 
{
   
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("| %-6s | %-30s | %-15s | %-15s | %-15s |\n", "ID", "Ten sach", "Tac gia", "The loai", "Trang thai");
    printf("------------------------------------------------------------------------------------------------------------\n");

    
    for (int i = 0; i < bookIndex; i++) 
	{
        printf("| %-6d | %-30s | %-15s | %-15s | %-15s |\n", book[i].bookId, book[i].bookName, book[i].bookAuthor, book[i].bookType, book[i].bookStatus);
        printf("------------------------------------------------------------------------------------------------------------\n");
    }
}
