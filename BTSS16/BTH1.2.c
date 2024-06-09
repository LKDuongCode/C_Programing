#include<stdio.h>
int main()
{
	FILE *file = NULL;
	
	file = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH1.2.txt","w");
	if (file != NULL)
	{
		fputs("I found the love for me!",file);
		fclose(file);
	}
	return 0;
}
