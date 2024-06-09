#include<stdio.h>
#include<string.h>
int swapAB(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a =10;
	int b = 20;
	printf("%d %d\n",a,b);
	swapAB(&a,&b);
	printf("%d %d",a,b);
	
}
