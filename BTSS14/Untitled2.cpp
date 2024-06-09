#include <stdio.h>
#include<string.h>
// Ham su dung con tro de dem so ky tu trong chuoi
int (char *chuoi,int *sizeCln) {
    int dem = 0;
    char *ptr = chuoi;

    for(int i=0;i<*sizeCln;i++)
    {
    	dem++;
	}

    return dem;
}

int main() {
    char chuoi[100];

    // Nhap chuoi ky tu
    printf("Nhap chuoi ky tu: ");
    gets(chuoi);
    
    int size = strlen(chuoi);

    // Dem so ky tu su dung con tro
    int soKyTu = demKyTu(chuoi,&size);

    // Hien thi so ky tu
    printf("So ky tu trong chuoi la: %d\n", soKyTu);

    return 0;
}
