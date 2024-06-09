#include<stdio.h>
int main ()
{
	float total,dMoney,rent,nSalary; 
	printf("moi ngai nhap vao tong thu nhap:");
	scanf("%f",&total);
	printf("\nMoi ngai nhap vao tien giam tru:");
	scanf("%f",&dMoney);
	if (total>=0&&total<=5000000)
	{
		rent=total*5/100;
	}
	else if (total>5000000&& total<=10000000)
	{
		rent=total*10/100;
	}
	else if (total>10000000&&total<=18000000)
	{
		rent=total*15/100;
	}
	else if (total>18000000&&total<=32000000)
	{
		rent=total*20/100;
	}
	else if (total>32000000&&total<=52000000)
	{
		rent=total*25/100;
	}
	else if (total>52000000&&total<=80000000)
	{
		rent=total*30/100;
	}
	else 
	{
		rent=total*35/100;
	}
	nSalary= total-(dMoney+rent);
	printf("\n Tien thue thu nhap la: %.0f",rent);
	printf("\n Tien luong thuc linh la: %.0f",nSalary);
} 
