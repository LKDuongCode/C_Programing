#include <stdio.h>
#include <conio.h>

int main() {
    char password[20];
    int i = 0;
    char ch;

    printf("Nhap mat khau: ");

    // ?n m?t kh?u khi nh?p li?u
    while (1) {
        ch = getch();

        if (ch == 13)  // 13 là m? ASCII cho phím Enter
            break;

        if (ch == 8 && i > 0) {  // 8 là m? ASCII cho phím Backspace
            printf("\b \b");  // Di chuy?n con tr? v? trý?c và xóa k? t?
            i--;
        } else {
            password[i++] = ch;
            printf("*");
        }
    }

    password[i] = '\0';  // K?t thúc chu?i

    printf("\nMat khau nhap vao: %s\n", password);

    return 0;
}

