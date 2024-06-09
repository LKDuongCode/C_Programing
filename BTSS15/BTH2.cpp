#include<stdio.h>
#include<string.h>
struct Score
{
	int studentCode;
	float mathScore;
	float liteScore;
};
int main()
{
	struct Score scoreList[5];
	// dung vong lap de nhap 
	
	for(int i=0;i<5;i++)
	{
		printf("Nhap ma sinh vien:");
		scanf("%d",&scoreList[i].studentCode);
		
		printf("Nhap diem toan:");
		scanf("%f",&scoreList[i].mathScore);
		
		printf("Nhap vao diem ngu van:");
		scanf("%f",&scoreList[i].liteScore);
	}
	
	//in ra danh sach diem thi
	for(int i=0;i<5;i++)
	{
		printf("Ma sinh vien: %d\n",scoreList[i].studentCode);
		printf("Diem toan: %.2f\n",scoreList[i].mathScore);
		printf("Diem van: %.2f\n",scoreList[i].liteScore);
	}
}
