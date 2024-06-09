#include<stdio.h>
int main()
{
	//C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo2.txt
	FILE *ptrDemo2;
	char buffer[] = "Gang Gang!!";
	
	//mo file
	ptrDemo2 = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo2.txt","w+");
	
	// viet vao
	fwrite(buffer,sizeof(char),sizeof(buffer),ptrDemo2);
	
	//dong tep tin 
	fclose(ptrDemo2);
	return 0;
	
}
