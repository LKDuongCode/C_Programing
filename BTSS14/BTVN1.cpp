#include<stdio.h>
void printNumb(int *a)
{
	printf("\ngia tri cua numb theo cach 2: %d",*a);
}
int main()
{
	int numb = 10;
	int *ptrNumb = &numb;
	printf("gia tri cua numb theo cach 1 la: %d\n", *ptrNumb);
	printNumb(&numb);
}
