#include <stdio.h>
int main() {
  //B1: Khai bao va nhap so phan tu (n) cua mang 1 chieu
  int n;
  printf("Nhap so phan tu cua mang 1 chieu:");
  scanf("%d", &n);
  //B2: Khai bao va nhap gia tri cac phan tu cua mang 1 chieu so nguyen gom n phan tu 
  float numbers [n];
  for (int i = 0; i < sizeof(numbers)/sizeof(float); i++) {
    printf("numbers [%d]=",i);
    scanf("%f",&numbers[i]);
  }
  //B3: Duyet cac phan tu cua mang va tinh trung binh cong gia tri cac phan tu 
  float sumNumbers = 0;
  for(int i = 0; i < sizeof(numbers)/sizeof(float); i++) {
    sumNumbers + numbers[i];
  }
  float avgNumbers = sumNumbers/(sizeof (numbers)/sizeof(float)); 
  //B4: In gia tri trung binh cong cua mang
  printf("Trung binh cong cac phan tu trong mang la: %.2f\n", avgNumbers);
}
