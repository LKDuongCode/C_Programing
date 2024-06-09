#include <stdio.h>
int main()
{
    int year, month, day;
    printf("Nhap vao so nam\n");
    scanf("%d", &year);
    if (year < 0){
        printf("Nam khong hop le");
    }
    printf("Nhap vao so thang\n");
    scanf("%d", &month);
    if ((month < 0) || (month > 12)){
        printf("thang khong hop le");
    }
    printf("Nhap vao so ngay\n");
    scanf("%d", &day);
    switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if ((day < 0) || (day > 31)){
            printf("ngay khong hop le");
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if ((day < 0) || (day > 30)){
            printf("ngay khong hop le");
        }
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            if ((day < 0) || (day > 29)){
                printf("ngay khong hop le");
            }
        }
        else if ((day < 0) || (day > 28)){
            printf("ngay khong hop le");
        }
        break;
    default:
        break;
    }
    printf("ngay thang nam hop le");
}
