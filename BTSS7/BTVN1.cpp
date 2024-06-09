#include<stdio.h>
int main (){
	for(int number=1;number<100;number++)
	{
		if (number%5==0&& number%3==0){
			printf("fizzbuzz");
		}
		else if(number%3==0){
			printf("fizz"); 
		}
		else if(number%5==0){
			printf("buzz"); 
		}
		printf("%d\n",number);  
	 } 
} 
