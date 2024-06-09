#include <stdio.h>
#include<string.h>
struct Student
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};
typedef struct Student s;
void inputStruct(s *a)
{
    printf("nhap ten ");
    gets(a->name);
    
    printf("nhap tuoi ");
    scanf("%d", &(a->old));
    
    printf("nhap sdt ");
    scanf("%d", &(a->phoneNumber));
    
    printf("nhap email ");
    getchar();
    gets(a->email);
}
void outputStruct(s *a)
{
    printf("Cac thong tin ve hoc sinh do la");
    puts(a->name);
    printf("\n%d\n", (a->old));
    printf("\n%d\n", (a->phoneNumber));
    puts(a->email);
}
int main()
{
    struct Student std1;
    inputStruct(&std1);
    outputStruct(&std1);
}
