#include<stdio.h>
int main()
{
	FILE *file = NULL;
	int age = 0;
	
	file = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH1.3.txt","w");
	if (file != NULL)
	{
		printf("Ban bao nhieu tuoi?");
		scanf("%d",&age);
		
		// ghi du lieu vao tep tin
		fprintf(file,"Chu nhan cua chiec may tinh nay %d tuoi!",age);
		fclose(file);
	}
	return 0;
	
}
