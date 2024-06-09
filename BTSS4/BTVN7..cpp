#include <stdio.h>
int main(){
    float a, b;
    printf("Moi ngai nhap vao luong co ban");
    scanf("%f", &a);
    printf("Moi ngai nhap vao ngay cong thuc te");
    scanf("%f", &b);
    if (b>26){
        b=26+(b-26)*1,5;
    }
    float wage=a*b/26;
    printf("Luong cau ngai la:%f",wage);
}
