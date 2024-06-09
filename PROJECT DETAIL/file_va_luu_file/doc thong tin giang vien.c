#include<stdio.h>
#include<stdlib.h>
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
int main()
{
	int curIndex = 0;
	TeacherInfo mySchool [500];
	
	FILE *f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\TeacherInfo.bin", "rb");
	if (f == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    while (fread(&mySchool[curIndex], sizeof(TeacherInfo), 1, f) == 1) {
        curIndex++;
    }
    fclose(f);	
	printTeacher(mySchool,curIndex);
	
	
}
