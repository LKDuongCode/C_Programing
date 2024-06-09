#include <stdio.h>
#include <stdlib.h>
int main()
{
    do
    {
        int num1, num2, num3;
        printf("moi ngai nhap 3 so nguyen\n");
        scanf("%d%d%d", &num1, &num2, &num3);
        printf("1. tong\n");
        printf("2. trung binh cong\n");
        printf("3. max,min\n");
        printf("4. thoat\n");
        int choice;
        scanf("%d", &choice);
        int max = num1, min = num1;
        max = (max > num2) ? max : num2;
        max = (max > num3) ? max : num3;
        min = (min < num2) ? min : num2;
        min = (min < num3) ? min : num3;
        switch (choice)
        {
        case 1:
            printf("%d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
            break;
        case 2:
            printf("(%d + %d + %d) / 3 = %d\n", num1, num2, num3, (num1 + num2 + num3) / 3);
            break;
        case 3:
            printf("Max: %d\tMin:%d\n",max,min);
            break;
        case 4:
            return 0;
        default:
            printf("moi ngai chon tu 1-4");
        }
    } while ("moi ngai chon tu 1-4");
}

