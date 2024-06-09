#include <stdio.h>
int main(){
  //1. Khai bao bien chieu dai va chieu rong hinh chu nhat 
  float length, height;
  //2. Thong bao nhap chieu dai va chieu rong
  printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
  //3. Lay gia tri gan vao dia chi cua bien length, height
  scanf("%f %f", &length, &height);
  //4. Khai bao va khoi tao bien dien tich area
  float area = length* height;
  //5. Khai bao va khoi tao bien chu vi perimeter
  float perimeter = (length + height) * 2;
  //6. In ra dien tich va chu vi hinh chu nhat
  printf("Hinh chu nhat co dien tich: %.1f và chu vi: %.1f", area, perimeter);
}
