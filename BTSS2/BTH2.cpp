#include<stdio.h>
#include<math.h>
int main(){
	int num1=11;
	int num2= 4;
	int sum= num1+num2;// tinh tong, hieu tich thuong  
	int sub= num1-num2;
	int mul=num1*num2;
	int devide=num1/num2;
	// thuong lam tron len làm tron xuong
	int devideCeil= ceil((double)num1/(double)num2);
	int devideFloor= floor((double)num1/(double)num2);
	// so du
	int surplus= num1%num2;
	// tang giam 1 don vi
	num1++;
	num2--;
	// num1 luy thua num2
	int result=pow(num1,num2); 
} 
