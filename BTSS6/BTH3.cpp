#include <stdio.h>
#include <stdlib.h>
int main(){
  //1. In menu do an sang
  do {
    printf("**************Breakfast Menu********\n");
    printf("1. Pho tom hum\n");
    printf("2. Pho bo kobe\n");
    printf("3. Pho ga Viet Nam\n");
    printf("4. Xoi trung thit\n");
    printf("5. Banh my trung\n");
    printf("6. My ton khong nguoi lai\n"); 
    printf("7. Tho?t\n");
    printf("Lua chon cua ban:");
    //2. Khái bao bien choice chua gia tr? L?a ch?n c?a khách hàng
    int choice; scanf("%d",&choice);
    switch(choice) {
      case 1:
        printf("Ban vua chon mon Pho tom hum, vui long doi trong giay lat\n");
        break;
      case 2:
        printf("Ban vua chon mon Pho bo Kobe, vui long doi trong giay lat\n");
        break;
      case 3:
        printf("Ban vua chon mon Pho ga Viet Nam, vui long doi trong giay lat\n"); 
        break;
      case 4:
        printf("Ban vua chon mon Xoi trung th?t, vui long doi trong giay lat\n"); 
        break;
      case 5:
        printf("Ban vua ch?n món Banh my trung, vui long doi trong giay lat\n"); 
        break;
      case 6:
        printf("Ban vua chon mon My ton khong nguoi lai, vui long doi trong giay lat\n");
        break;
      case 7:
        exit(0);
      default:
        printf("Vui long chon tu 1-7\n");
    }
  } while ("Vui long cho tu 1 - 7\n");
}
