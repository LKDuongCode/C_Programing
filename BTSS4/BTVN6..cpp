#include <stdio.h>
int main(){
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    int max = num1, min = num1, number;
    max = (num1 > num2) ? num1 : num2;
    max = (num3 > max) ? num3 : max;
    min = (num1 < num2) ? num1 : num2;
    min = (num3 < min) ? num3 : min;
    number= num1+num2+num3-max-min;
    printf("Max=%d \t Min=%d \t SCL=%d",max,min,number);
}
