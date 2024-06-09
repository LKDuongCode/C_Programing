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
int main()
{
	int curIndex = 0;
	CourseInfo courseList [200];
	
	FILE *f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\CourseInfo.bin", "rb");
	if (f == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    while (fread(&courseList [curIndex], sizeof(CourseInfo), 1, f) == 1) {
        curIndex++;
    }
    fclose(f);	
	printCourse(courseList,curIndex);
	
	
}
