#include<stdio.h>
int main(){
    int number;
    printf("Nhap so nguyen N");
    scanf("%d",&number);
    for (int i = 1; i < 10; i++)
    {
        printf("%d x %d=%d\n",number,i,number*i);
    }
    
}
