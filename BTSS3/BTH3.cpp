#include <stdio.h>
int main(){
  // 1. Khai bao bien chua ky tu gioi tinh
  char sex;
  // 2. Thong bao nh?p gioi tinh cua sinh vien
  printf ("Nhap gioi tinh cua sinh vien: ");
  // 3. Lay gia tri gan vao bien sex
  sex = getchar();
  // 4. In ra gioi tinh cua sinh vien
  printf("Gioi tinh cua sinh vien la: ");
  putchar(sex); 
  return 0;
}

