#include<stdio.h>
int main()
{
	FILE *file;
	int line;
	char content[50];
	file = fopen("C:\\Users\\Admin\\Desktop\\BTVN3.txt","w");
	
	if(file == NULL)
	{
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	
	printf("Nhap vao so dong: ");
	scanf("%d",&line);
	
	for (int i = 0; i < line; i++) 
	{
		printf("Nhap noi dung dong thu %d: ", i + 1);
		scanf(" %[^\n]", content);
		fprintf(file, "%s\n", content);
	}
	
	file = fopen("C:\\Users\\Admin\\Desktop\\BTVN3.txt","r");
	if(file== NULL)
	{
		printf("Khong the mo file de ghi:\n");
		return 1;
	}
	
	fprintf(file,"Noi dung file:\n");
	for (int i = 0; i < line; i++)
	{
		fgets(content, sizeof(content), file);
		fprintf(file,"Dong thu %d: %s\n", i + 1, content);
	}
	fclose(file);
	return 0;
}
