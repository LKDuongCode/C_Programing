/*
	1. khoi tao ham kiem tra, a la so se truyen vao
	2. co 3 truong hop:
		2.1. neu a<2 thi sai( so nguyen to chi bat dau tu 2)
		2.2. duyet tu 2 den can bac hai cua a, neu a chia het cho mot so nao do ngoai no va 1 thi sai.
		2.3. neu a vuot qua duoc hai dieu kien tren thi a thoa man la mot so nguyen to.
*/
#include<stdio.h>// dong goi ham kiem tra so nguyen to trong mang
#include<math.h>
int testPrime(int a)// a dai dien cho gia tri nhap vao
{
	if(a<2)
	{
		return 0;
	}
	for(int i=2;i<sqrt(a);i++)
	{
		if(a%i == 0)// truong hop a co uoc ngoai no va 1
		{
			return 0;
		}
	}
	return 1;// nhung truong hop con lai
	
}

	


