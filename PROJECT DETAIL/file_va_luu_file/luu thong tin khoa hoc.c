#include<stdio.h>
#include<stdlib.h>
typedef struct // struct khoa hoc
{
	int courseId;
	char courseName[100];
	char cousrseType[50];
	char cousrsePrice[100];
	char cousrseTime[100];
	
}CourseInfo;

int main()
{
	int curIndex = 2;
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
	
	FILE *f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\CourseInfo.bin", "wb");
	if (f == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    for (int i = 0; i < curIndex; i++) 
	{
        fwrite(&course[i], sizeof(CourseInfo), 1, f);
    }

    fclose(f);	
}		
