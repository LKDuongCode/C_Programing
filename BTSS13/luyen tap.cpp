#include<stdio.h>
#include<string.h>
int main()
{
	printf("Moi nhap vao chuoi ki tu:");
	char str[100];
	int tickElements[100] = {0};
	gets(str);
	int countAppear;
	for(int i=0;i<strlen(str);i++)
	{
		countAppear = 1;
		for(int j=i+1;j<strlen(str);j++)
		{
			if(str[j] == str[i])
			{
				countAppear++;
				tickElements[j] = 1;
			}	
		}
		if(tickElements[i] == 0)
		{
			printf("%c : %d\n",str[i],countAppear);		
		}
	}	
}
