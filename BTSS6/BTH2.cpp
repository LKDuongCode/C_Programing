#include <stdio.h> 
int main() {
  //1. Khai bao bien sum chua tong cac so nguyen le 
  int sum = 0;
  //2. Nhap cac so nguyen va ket thuc khi nhap e 
  printf("Nhap vao cac so nguyen:\n");
  int number = 1;
  while(number != 0) {
    scanf("%d", &number);
    //3. Kiem tra number Le, neu Le cong vao tong sum 
    if (number % 2 != 0) {
      sum += number;
    }
  }
  //4. In ra tong cac so Le
  printf("\nTong cac so le vua nhap la: %d\n",sum);
}
