#include <stdio.h>

int main() 
{
    FILE *f1, *f2, *f3;
    char x;

    f1 = fopen("C:\\Users\\Admin\\Desktop\\BTVN1.txt", "r");
    f2 = fopen("C:\\Users\\Admin\\Desktop\\BTVN3.txt", "r");
    f3 = fopen("C:\\Users\\Admin\\Desktop\\BTVN5.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) 
	{
        printf("Khong the mo cac tep!!\n");
        return 1;
    }

    while ((x = fgetc(f1)) != EOF) 
	{
        fputc(x, f3);
    }

    while ((x = fgetc(f2)) != EOF) 
	{
        fputc(x, f3);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Sao chep hoan thanh!\n");

    return 0;
}
