#include <stdio.h>

int main() {
    printf("\n\n\n\n\t\t\t\tHello is loading........");
    getchar(); // Ch? ngu?i dùng nh?n Enter

    printf("\033[H\033[J"); // Xóa màn hình bang ma thoat
    printf("\n\n\n\t\t\t\t\t say Goodbye\n");

    return 0;
}

