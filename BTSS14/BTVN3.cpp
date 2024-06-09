#include<stdio.h>
#include<string.h>
void compareLenStr(int *len1,int *len2)
{
	if(*len1==*len2)
	{
		printf("Hai chuoi bang nhau.\n");
	}
	else if(*len1 > *len2)
	{
		printf("Chuoi 1 co do dai lon hon chuoi 2.\n");
	}
	else
	{
		printf("Chuoi 2 co do dai lon hon chuoi 1.\n");
	}
}
int countLenStr(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		*str++;
		count++;
	}
	return count;
}
int main()
{
	char str1[100];
	char str2[100];
	
	printf("moi ban nhap vao chuoi 1:");
	fgets(str1,100,stdin);
	printf("\nmoi ban nhap vao chuoi 2:");
	fgets(str2,100,stdin);
	
	int len = countLenStr(str1);// tai sao ko dung duoc & de truyen vao trong ham tren ma phai bo.
	int len2 = countLenStr(str2);
	
	compareLenStr(&len,&len2);
	
	
	printf("Do dai cua chuoi 1: %d\n", len);
	printf("Do dai cua chuoi 2: %d\n",len2);
	
}
