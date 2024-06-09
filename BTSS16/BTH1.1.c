#include<stdio.h>
int main ()
{
	FILE *file = NULL;
	
	file = fopen ("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH1.1.txt","w");
	if(file != NULL)
	{
		fputc('A',file); // ghi them vao tap tin ki tu A
		fclose(file);
	}
	return 0;
} 
