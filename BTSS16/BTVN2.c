#include<stdio.h>

int main()
{
	FILE *file;
	char buffer[100];
	
    file = fopen("C:\\Users\\Admin\\Desktop\\BTVN2.txt","r");
    
    fread(buffer,sizeof(char), sizeof(buffer),file);
    
    printf("Noi dung van ban la: \n%s\n",buffer);
    fclose(file);
    return 0;
}
