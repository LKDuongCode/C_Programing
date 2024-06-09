#include <stdio.h>
void printA(int *x)
{
	printf("dia chi cua bien a = %d\n",*x);
	
}
int main(){
	int a;
	
	printf("nhap gia tri a:");
	scanf("%d",&a); 
	printA(&a);
	printf("___________________________________\n");
	printf("dia chi cua bien a = %d\n",a);
	int *pointer = &a; 
	printf("gia tri cua con tro khi chi vao a = %d\n",*pointer);
}
