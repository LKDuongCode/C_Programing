/*
	1. khoi tao ham kiem tra, truyen vao bien n( chieu dai mang) va mang num[](dai dien cho mang, cac phan tu trong mang)
	2. khoi tao bien i, duyet mang bang vong lap 
	3. neu ma so ben trai khac voi so doi xung ben phai thi sai
	4. neu thong qua dieu kien tren thi dung.
*/
#include<stdio.h>
int testSymmetric[int n,int numb[]//n dai dien cho size cua mang va numb dai dien cho mang truyen vao
{
	int i;// khai bao i ra ngoai de co the dung nhieu lan
	for(i=0;i<n;i++)
	{
		if(numb[i]!=numb[n-i-1])//so sanh phan tu ben trai va phan tu ben phai xem co trung nhau ko
		{
			return 0;// khong phai ham doi xung
		}
	}
	return 1;//truong hop khac neu thong qua dieu kien if tren thi do se la ham doi xung
}
