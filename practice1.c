#include<stdio.h>
int swap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	return a;
}

int main ()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("x,y truoc khi thay doi: %d %d",x,y);
	
	
	
	int test = swap(x,y);
	printf("x,y sau khi thay doi: %d",test);
}
