#include<stdio.h>
int caculateSum(int *a,int *b)
{
	int sum = 0;
	if(*a<*b)
	{
		printf("Nhap gioi han tren va duoi sai thu tu, hay nhap lai.");
	}
	else
	{
		for(int i=*b ; i<=*a;i++)
		{
			sum = sum + i;
		}
		printf("tong cua doan la: %d", sum);
	}
}
int main()
{
	printf("Moi nhap gioi han tren:");
	int upperLimit;
	scanf("%d",&upperLimit);
	
	printf("Moi nhap vao gioi han duoi:");
	int lowerLimit;
	scanf("%d",&lowerLimit);
	
	caculateSum(&upperLimit,&lowerLimit);
}
