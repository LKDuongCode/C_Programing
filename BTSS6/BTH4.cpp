#include <stdio.h>
int main() {
  //1. Nhap cac so nguyen va Luu vao bien number
  int number;
  printf("Nhap vao cac so nguyen:\n");
  do {
    scanf("%d", &number);
    //2. Kiem tra number bang 0, neu bang 0 thoat khoi vong Lap
    if (number == 0) {
      break;
    }
    //3. Kiem tra number co chia het cho 3 khong, khong chia het cho 3 chuyen sang vong lap tiep theo 
    if (number % 3 != 0) {
      continue;
    }
    //4. In ra so nguyen chia het cho 3
    printf("So nguyen %d chia het cho 3\n",number);
  } while(1==1);
}
