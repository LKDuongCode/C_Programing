#include<stdio.h>
#include<math.h>
int main (){
	int count,num1,num2,num3;
	for(count=100;count<1000;count++){
		num1=count /100;
		num2=(count/10)%10;
		num3=count%10;
		if ((pow(num1,3))+(pow(num2,3))+(pow(num3,3))==count){
			printf("Amstrong:%d\n",count);
		}
	}
}

