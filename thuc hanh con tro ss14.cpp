#include<stdio.h>
#include<string.h>
int swap(int *a, int *b)// doi cho hai bien voi nhau
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int *ptrA = &a;// tham chieu gia tri trong bien a
	(*ptrA)++;// thay doi gia tri bien a thong qua con tro
	int b = *ptrA;// gan bien b bang gia tri con tro(tham chieu bien a)
	printf("bien a = %d\n",a);
	printf("bien b = %d",b);
	
	char letter = 'A';
	char *ptrL = &letter;
	char *ptr2 = ptrL;// gan con tro nay cho con tro khac, 
	printf("\ngia tri duoc tham chieu den cua ptr2: %c\n",*ptr2);
	
	int num1 = 10;// neu chi truyen ma ko dung con tro thi ket qua in ra van nhu cu
	// boi vi no chi hoat dong trong ham tren kia thoi, gia tri trong ham main van the.
	int num2 = 20;
	printf("%d %d, truoc khi doi cho\n",num1,num2);
	swap(&num1,&num2);
	printf("%d %d,sau khi doi cho\n",num1,num2);
	return 0;
} 
