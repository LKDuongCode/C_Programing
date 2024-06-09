#include<stdio.h>
struct Student
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};

int main(){
    struct Student s1;
    printf("nhap ten ");
    gets(s1.name);
    
    printf("nhap tuoi ");
    scanf("%d",&s1.old);
    
    printf("nhap sdt ");
    scanf("%d",&s1.phoneNumber);
    
    printf("nhap email ");
    getchar();
    gets(s1.email);

    printf("%s\n",s1.name);
    printf("%d\n",s1.old);
    printf("%d\n",s1.phoneNumber);
    printf("%s\n",s1.email);
}
