#include<stdio.h>
// b1. mo tep tin
//b2. kiem tra xem mo duoc ko
//b3. doc tep tin
//b4.dong tep tin

//C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH2.txt
int main ()
{
	FILE *file = NULL;
	char readFile[200];
	
	// cach 1: doc ca chuoi
	file = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH2.txt","r");
	if (file != NULL)
	{
		fgets(readFile,sizeof(readFile),file); // dung fgets de doc se ko doc phai ki tu la nhu fread
		
		printf("%s\n",readFile);
	}
	
	fclose(file);
	
	// cach 2 : doc tung ki tu trong file
	int curCharacter = 0;
	file = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\BTH2.txt","r");
	if (file != NULL)
	{
		// vong lap lan luot doc tung ki tu:
		do
		{
			curCharacter = fgetc(file); // doc ki tu 
			printf("%c",curCharacter);
		}
		while(curCharacter != EOF);
	}
	fclose(file);
	
	/*
	1. neu dung for thi se nhu nay 
	if (file != NULL) 
	{
        for (curCharacter = fgetc(file); curCharacter != EOF; curCharacter = fgetc(file)) 
		{
            printf("%c", curCharacter);
        }
    }
    
    2. neu dung while se nhu nay:
    if (file != NULL) {
        curCharacter = fgetc(file);
        while (curCharacter != EOF) 
		{
            printf("%c", curCharacter);
            curCharacter = fgetc(file);
        }
    }
	*/ 
}
