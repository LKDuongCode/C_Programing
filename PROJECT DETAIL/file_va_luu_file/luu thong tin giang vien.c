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
int main()
{
	int curIndex = 2;
	TeacherInfo mySchool [500] = 
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
	
	FILE *f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\TeacherInfo.bin", "wb");
	if (f == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    for (int i = 0; i < curIndex; i++) 
	{
        fwrite(&mySchool[i], sizeof(TeacherInfo), 1, f);
    }

    fclose(f);	
	
}
