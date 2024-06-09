#include <stdio.h>
int main(){
  //1. Nhap so phan tu va gia tri cac phan tu 
  int n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n"); 
  for (int i=0;i<n;i++) {
    printf("numbers[%d]=",i);
    scanf("%d", &numbers[i]);
  }
  //2. Su dung thuat toan chen sap xep mang tang dan 
  for (int i=1;i<n;i++){
    int key = numbers[i];
    int j = i-1;
    while(j>=0 && key<numbers[j]){ 
      numbers [j+1] = numbers[j]; 
      j-=1;
    }
    numbers [j+1] = key;
  }
  //3. In mang sau khi da sap xep
  printf("Mang sau khi da sap xep tang dan:\n"); 
  for (int i=0;i<n;i++) {
    printf("%d\t", numbers[i]);
  }
}
