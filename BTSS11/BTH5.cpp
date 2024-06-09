#include <stdio.h> 
int main() {
  int numbers[] = {2,4,6,8,10}; 
  //1. Nhap gia tri tim kiem
  int searchValue;
  printf("Nhap vao gia tri can tim kiem:");
  scanf("%d", &searchValue);
  //2. Khai bao va khoi tao gia tri chi so bat dau va ket thuc
  int start = 0;
  int end  = sizeof (numbers)/sizeof(int);
  //3. Su dung thuat toan tim kiem nhi phan tim phan tu co gia tri la searchValue 
  int mid;
  while(start<=end) {
    mid = (start+end)/2;
    if (numbers [mid] == searchValue){
      break;
    } else if (numbers [mid]<searchValue) {
      start = mid+1;
    } else {
      end = mid-1;
    }
  }
  if (numbers [mid] == searchValue) {
    printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,numbers[mid]);
  } else {
    printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
  }
}
