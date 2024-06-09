#include<stdio.h>
int main()
{
	//C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo1.txt
	FILE *demoPtr;
	char buffer[100];
	
	// mo tep tin de doc
	demoPtr = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo1.txt","r");
	
	// doc va hien thi du lieu tren man hinh
	fread(buffer,sizeof(char),sizeof(buffer),demoPtr);
	
	// doc va hien thi tep tin
	printf("Du lieu doc duoc tu tep tin: %s",buffer);
	
	// dong tep tin sau khi su dung
	fclose(demoPtr);
	
}
