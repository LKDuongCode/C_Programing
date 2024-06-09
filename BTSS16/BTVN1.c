#include<stdio.h>
int main()
{
	FILE *file = NULL;
	char arr[100];
	file = fopen("C:\\Users\\Admin\\Desktop\\BTVN1.txt","w");
	if(file != NULL)
	{
		printf("Nhap vao chuoi ki tu: ");
		getchar();
		scanf("%s",arr);
	}
	fprintf(file, "Noi dung trong file la: \n%s\n",arr);
	fclose(file);
    return 0;
}
