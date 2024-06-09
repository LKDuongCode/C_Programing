#include<stdio.h>
int main(){
	int num1,num2;
	char calculator;
	printf("Moi ngai nhap vao hai so nguyen.");
	scanf("%d %d",&num1,&num2);
	fflush(stdin);// dung de xoa buffer truoc khi dung getchar
	printf("nhap ten phep tinh:");
	calculator=getchar();
	// dung switch cae in ra ket qua phep tinh
	
	switch(calculator){
		case '+':
			printf("%d cong %d bang %d\n", num1,num2,num1+num2);
			break;
		case '-':
			printf("%d tru %d bang %d\n", num1,num2,num1-num2);
			break;
		case '*':
			printf("%d nhan %d bang %d\n",num1,num2,num1*num2);
			break;
		case '/':
			printf("%d chia %d bang %d\n",num1,num2,num1/num2);
			break;
		case '%':
			printf("%d chia lay du %d bang %d\n",num1, num2,num1%num2);
			break;
		default:
			printf(" nhap sai phep tinh");
	}
	
}
