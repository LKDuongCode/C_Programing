#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// tao ham kiem tra so nguyen to
bool prime (int a)
{
	int isPrime = 0;
	if (a >=2)
	{
		for(int k=2;k<=sqrt(a);k++)
		{
			if(a%k==0)
			{
				isPrime = 1;
				return false;
			}
				
		}
	}
	else
	{
		isPrime = 1;
		return false;
	}
	if( isPrime== 0)
	{
		return true;
	}
	
}

int main()
{
	int x;
	printf("Moi nhap vao so phan tu cua mang 1:");
	scanf("%d",&x);
	int arrFirst[x];
	// nhap gia tri mang 1
	for(int i=0;i<x;i++)
	{
		printf("arrFirst[%d] = ",i);
		scanf("%d",&arrFirst[i]);
	}
	// khai bao va nhap gia tri mang 2
	int y;
	printf("Moi nhap vao so phan tu cua mang 2:");
	scanf("%d",&y);
	int arrSecond[y];
	for(int i=0;i<y;i++)
	{
		printf("arrSecond[%d] = ",i);
		scanf("%d",&arrSecond[i]);
	}
	
	// khoi tao bien dem
	int countFirst = 0;
	int countSecond = 0;
	// truyen gia tri vao trong ham tren main.
	for(int i=0;i<x;i++)
	{
		if(prime(arrFirst[i]))
		{
			countFirst++;
		}
	}
	for(int i=0; i<y;i++)
	{
		if(prime(arrSecond[i]))
		{
			countSecond++;
		}
	}
	if(countFirst > countSecond)
	{
		printf("Cac so nguyen to trong mang arrFirst la:\n");
		for(int i=0;i<x;i++)
		{
			if(prime(arrFirst[i]))
			{
				printf("%d\t",arrFirst[i]);
			}
		}
	}
	else
	{
		printf("Cac so nguyen to trong mang arrSecond la:\n");
		for(int i=0;i<y;i++)
		{
			if(prime(arrSecond[i]))
			{
				printf("%d\t",arrSecond[i]);
			}
		}
	}
	
} 
