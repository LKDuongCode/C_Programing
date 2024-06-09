#include <stdio.h>
int main()
{
    int num;
    printf("Nhap so phan tu mang:");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can cap nhat: ");
    int addValue;
    scanf("%d", &addValue);
    printf("Vi tri phan tu cap nhat:");
    int index;
    scanf("%d", &index);
    arr[index]=addValue;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
    }
    
}
