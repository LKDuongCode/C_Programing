#include<stdio.h>
int caculateDivide (int x, int y)// thiet lap ham tinh toan chia voi hai tham so la x, y
{
	if(x>y)
	{
		if(x%y==0)
		{
			return x/y;
		}
		else
		{
			printf("%d khong chia het cho %d\n",x,y);
			return x/y;
		}
	}
	else if (y>x)
	{
		if(y%x == 0)
		{
			return y/x;
		}
		else
		{
			printf("%d khong chia het cho %d\n",y,x);
	        return y/x;
		}
	}
}
int main (){
	printf("Nhap vao ba so a, b,c:");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap so thu 1:\n");
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,caculateDivide(a,b));
	
	printf("Cap so thu 2:\n");
	printf("%d * %d = %d\n",a,c,a*c);
	printf("%d / %d = %d\n",a,c,caculateDivide(a,c));
	
	printf("Cap so thu 3:\n");
	printf("%d * %d = %d\n",b,c,b*c);
	printf("%d / %d = %d\n",b,c,caculateDivide(b,c));
}
