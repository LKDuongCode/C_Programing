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

        if (ch == 13)  // 13 l� m? ASCII cho ph�m Enter
            break;

        if (ch == 8 && i > 0) {  // 8 l� m? ASCII cho ph�m Backspace
            printf("\b \b");  // Di chuy?n con tr? v? tr�?c v� x�a k? t?
            i--;
        } else {
            password[i++] = ch;
            printf("*");
        }
    }

    password[i] = '\0';  // K?t th�c chu?i

    printf("\nMat khau nhap vao: %s\n", password);

    return 0;
}

