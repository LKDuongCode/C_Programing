#include<stdio.h>
#include<string.h>
struct Students
{
	char nameStudent[70];
	int studentCode;
	float argScore;
};
int main()
{
	struct Students st1 = {"Le Khanh Duong",1712,9.5};
	printf("\t\t\t===[STUDENT INFO]===\t\t\t\n");
	printf("Ten sinh vien: %s\n",st1.nameStudent);
	printf("Ma sinh vien: %d\n",st1.studentCode);
	printf("Diem trung binh: %.2f\n",st1.argScore);
	
	printf("Cach 2\n");
	strcpy(st1.nameStudent,"Le Van Duong");
	st1.studentCode = 123;
	st1.argScore = 9.8;
	printf("Ten: %s\n",st1.nameStudent);
	printf("Ma:%d\n",st1.studentCode);
	printf("Diem:%.2f\n",st1.argScore);
	
}
