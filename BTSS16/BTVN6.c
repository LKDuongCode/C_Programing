#include <stdio.h>
#include <stdlib.h>

struct Student 
{
    char name[50];
    int age;
    char sdt[20];
    char email[20];
};

int main() 
{
    FILE *f = NULL;
    int n;

    f = fopen("C:\\Users\\Admin\\Desktop\\BTVN6.txt", "w");
    if (f != NULL) 
	{
        printf("Nhap so sinh vien: ");
        scanf("%d", &n);
        struct Student id[n];

        for (int i = 0; i < n; i++) 
		{
            printf("Nhap thong tin sinh vien:\n");
            printf("Nhap ten sinh vien: ");
            scanf("\n");
            fgets(id[i].name, sizeof(id[i].name), stdin);
            printf("Nhap tuoi: ");
            scanf("%d", &id[i].age);
            printf("Nhap so dien thoai: ");
            scanf("%s", id[i].sdt);
            printf("Nhap email: ");
            scanf("\n");
            fgets(id[i].email, sizeof(id[i].email), stdin);
        }

        fprintf(f, "Thong tin sinh vien:\n");
        for (int i = 0; i < n; i++) 
		{
            fprintf(f, "Ho va ten: %s", id[i].name);
            fprintf(f, "Tuoi: %d\n", id[i].age);
            fprintf(f, "So dien thoai: %s", id[i].sdt);
            fprintf(f, "Email: %s", id[i].email);
        }

        fclose(f);
        printf("Ghi thong tin sinh vien vao file BTVN6.txt thanh cong!\n");
    } 
	else 
	{
        printf("Khong the mo file BTVN6.txt de ghi.\n");
        return 1;
    }

    return 0;
}


