#include <stdio.h>
int main(){
    int year, month;
    printf("Nhap vao nam\n");
    scanf("%d", &year);
    printf("Nhap vao so thang\n");
    scanf("%d", &month);
    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 ngay.\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 ngay.\n");
        break;
    case 2:
        if ((year%4==0&&year%100!=0)||(year%400==0)){
            printf("29 ngay.\n");
        }
        else printf("28 ngay.\n");
        break;
    default:
        printf("Nhap lai so thang");
        break;
    }
}
