#include <stdio.h>
void reverse(int arr[], int lenghth)
{
    int size;
    int swap;
    for (int i = 0; i < lenghth / 2; i++)
    {
        size = lenghth - 1 - i;
        swap = arr[i];
        arr[i] = arr[size];
        arr[size] = swap;
    }
}
int search(int arr[], int length, int findValue)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == findValue)
        {
            return i;
        }
    }
}
int main()
{
    int findValue, swap;
    int arr[100];
    int currentIndex = 0, n, currentIndex1 = 0;
    int arr2[100];
    int arr1[100];
    do
    {
        printf("----------------------MEUNU--------------------\n");
        printf("1.Nhap vao mang\n");
        printf("2.In ra mang\n");
        printf("3.Sao chep mang vao mang khac\n");
        printf("4.Nhap vao mang khac, doi cho 2 mang voi nhau\n");
        printf("5.Dao nguoc mang\n");
        printf("6.Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
        printf("7.Thoat\n");
        int choice;
        printf("Nhap lua chon cua ban");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu cua muon them vao mang");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("arr[%d]=", i);
                scanf("%d", &arr[currentIndex]);
                currentIndex++;
            }
            break;
        case 2:
            for (int i = 0; i < currentIndex; i++)
            {
                printf("arr[%d]=%d", i, arr[i]);
            }
            break;
        case 3:
            for (int i = 0; i < currentIndex; i++)
            {
                arr2[i] = arr[i];
            }
            printf("Mang da sao chep la");
            for (int i = 0; i < currentIndex; i++)
            {
                printf("arr2[%d]=%d", i, arr2[i]);
            }
            break;
        case 4:
            printf("Nhap so phan tu cua muon them vao mang");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("arr1[%d]=", i);
                scanf("%d", &arr1[currentIndex]);
                currentIndex1++;
            }
            if (currentIndex > currentIndex1)
            {
                for (int i = 0; i < currentIndex; i++)
                {
                    if (i < currentIndex1)
                    {
                        swap = arr[i];
                        arr[i] = arr1[i];
                        arr1[i] = swap;
                    }
                    else
                    {
                        arr1[i] = arr[i];
                        arr[i] = 0;
                    }
                }
                swap = currentIndex;
                currentIndex = currentIndex1;
                currentIndex1 = swap;
            }
            else
            {
                for (int i = 0; i < currentIndex1; i++)
                {
                    if (i < currentIndex)
                    {
                        swap = arr[i];
                        arr[i] = arr1[i];
                        arr1[i] = swap;
                    }
                    else
                    {
                        arr[i] = arr1[i];
                        arr1[i] = 0;
                    }
                }
                swap = currentIndex;
                currentIndex = currentIndex1;
                currentIndex1 = swap;
            }
            printf("arr ");
            for (int i = 0; i < currentIndex; i++)
            {
                printf("arr[%d]=%d\n", i, arr[i]);
            }

            break;
        case 5:
            reverse(arr, currentIndex);

            for (int i = 0; i < currentIndex; i++)
            {
                printf("arr[%d]=%d\n", i, arr[i]);
            }
            break;
        case 6:
            printf("Nhap phan tu can tim");
            scanf("%d", &findValue);
            printf("Vi tri phan tu giong voi phan tu can tim trong mang la %d", search(arr, currentIndex, findValue));
            break;
        case 7:
            return 0;
        default:
            printf("Nhap tu 1-7");
            break;
        }
    } while (1);
}
