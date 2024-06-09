#include <stdio.h>
int main() {
  //B1: Nhap so phan tu cua mang 2 chieu so nguyen 
  int row, col;
  printf("Nhap so dong va so cot cua mang 2 chieu:"); 
  scanf("%d %d", &row, &col);
  //B2: Khai bao va nhap gia tri mang 2 chieu so nguyen 
  int numbers[row][col];
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
      printf("numbers[%d][%d]=",i,j);
      scanf("%d", &numbers[i][j]);
    }
  }
  //B3: In gia tri mang 2 chi?u theo ma tran 
  printf("Gia tri cac phan tu mang 2 chieu:\n"); 
  for(int i = 0; i < row ; i++){
    for (int j=0; j < col; j++){
      printf("%d\t" , numbers[i][j]);
    }
    printf("\n");
  }
}
