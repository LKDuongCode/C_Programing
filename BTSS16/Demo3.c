#include<stdio.h>
int main()
{
	//C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo3.txt
	FILE *ptrDemo3;
	char buffer[] = "Hello friends!";
	char buffer2[100];
	
	ptrDemo3 = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\Demo3.txt","w+");
	
	// gi du lieu len tren tep tin
	fwrite(buffer,sizeof(char),sizeof(buffer),ptrDemo3);
	
	//Chuyen con tro den dau tep tin
	fseek(ptrDemo3,0 , SEEK_SET);
	
	// doc noi dung tep tin va hien thi noi dung
	fread(buffer2,sizeof(char),sizeof(buffer2),ptrDemo3);
	
	// truoc khi in can them null de end chuoi
	buffer2[sizeof(buffer2)-1] = '\0';
	
	printf("Hien thi: %s",buffer2);
	
	// dong tep tin
	fclose(ptrDemo3);
	return 0;
	
}
