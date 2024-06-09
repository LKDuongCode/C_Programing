#include <stdio.h>
int main(){
  //1. Khai bao bien sum chua tong cac so nguyen chan trong khoang 1 - 10 
  int sum = 0;
  //2. Dung for de duyet và in cac so nguyen chan tu 1 - 10 
  printf("Cac so nguyen chan trong khoang 1 - 10 la: \n"); 
  for(int i = 1; i < 10; i++) {
    //3. Kiem tra i có gia tri chan khong 
    if(i % 2 == 0) {
    //4. In ra gia tri i va cong vao tong sum 
      printf("%d\t",i);
      sum += i;
    }
  }
  //5. In ra tong cac so chan trong kho?ng 1 - 10
  printf("\nTong cac so chan trong khoang 1 - 10 la: %d\n", sum);
}
