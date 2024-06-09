#include<stdio.h>
#include<string.h>
int countString(char *clnStr,int *clnSize)
{
	int count = 0;
	for(int i=0;i<*clnSize;i++)
	{
		count++;	
	} 
	return count;
}
int main()
{
	printf("Moi ban nhap vao mot chuoi ki tu:");
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str, "\n")] = '\0'; // loai bo ki tu \n tu chuoi.
	int size = strlen(str);
	countString(str,&size);
	int result = count;
	
	
}
