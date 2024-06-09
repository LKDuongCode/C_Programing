#include <stdio.h>
#include <string.h>
int main()
{
    int str[50];
    int str3[50], str4[50], str5[50];
    do
    {
        printf("1.Nhap vao chuoi\n");
        printf("2.In ra chuoi\n");
        printf("3.Sao chep chuoi vao 1 chuoi khac\n");
        printf("4.Nhap vao chuoi khac,tien hanh them chuoi do vao chuoi ban dau\n");
        printf("5.Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("6.In ra chuoi dao nguoc");
        printf("7.Thoat");
        int choice;
        printf("Nhap lua chon cua ban");
        scanf("%d", choice);
        switch (choice)
        {
        case 1:
            printf("Nhap vao chuoi can nhan");
            gets(str);
            break;
        case 2:
            printf("Chuoi da nhap la");
            puts(str);
            break;
        case 3:
            for (int i = 0; i < strlen(str); i++)
            {
                str3[i] = str[i];
            }
            puts(str3);
            break;
        case 4:
            printf("Nhap chuoi can them");
            puts(str4);
            strcat(str, str4);
            break;
        case 5:
            printf("Nhap chuoi can so sanh");
            puts(str5);
            if (strcmp(str, str5) == 0)
            {
                printf("2 chuoi giong nhau");
            }
            else if (strcmp(str, str5) > 0)
            {
                printf("chuoi dau lon hon");
            }
            else
            {
                printf("chuoi sau lon hon");
            }

            break;
        case 6:
            for (int i = strlen(str); i > 0; i--)
            {
                printf("%c", str[i]);
            }

            break;
        default:
            printf("Nhap tu 1 - 7");
            break;
        }
    } while (1);
}
