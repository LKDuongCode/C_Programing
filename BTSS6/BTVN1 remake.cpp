#include<stdio.h>
int main()
{
	printf("Moi ban nhap so muon in ra bang cuu chuong:");
	int n;
	scanf("%d",&n);
	printf("Bang cuu chuong %d tu 1-9:\n",n);
	for(int i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
