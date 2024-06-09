#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char username[50];
    char password[50];
} User;

#define MAX_USERS 3

int registerUser(User userList[], int *userCount) {
    char username[50];
    char password[50];

    printf("Nhap ten nguoi dung: ");
    scanf("%s", username);
    printf("Nhap mat khau: ");
    scanf("%s", password);

    // Ki?m tra xem ngý?i dùng ð? t?n t?i hay chýa
    for (int i = 0; i < *userCount; i++) {
        if (strcmp(userList[i].username, username) == 0) {
            printf("ten da ton tai.\n");
            return 0;
        }
    }

    // Ki?m tra s? lý?ng ngý?i dùng ð? ð?t t?i ða hay chýa
    if (*userCount >= MAX_USERS) {
        printf("khong the tao them tai khoan.\n");
        return 0;
    }

    // Lýu thông tin ngý?i dùng vào danh sách
    strcpy(userList[*userCount].username, username);
    strcpy(userList[*userCount].password, password);
    (*userCount)++;

    printf("Dang ki tai khoan thanh cong.\n");
    return 1;
}

int loginUser(User userList[], int userCount) {
    char username[50];
    char password[50];

    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap mat khau: ");
    scanf("%s", password);

    // Ki?m tra thông tin ðãng nh?p
    for (int i = 0; i < userCount; i++) {
        if (strcmp(userList[i].username, username) == 0 && strcmp(userList[i].password, password) == 0) {
            printf("Dang nhap thanh cong.\n");
            return 1;
        }
    }

    printf("ten nguoi dung hoac mat khau khong chinh xac.\n");
    return 0;
}

int main() {
    User userList[MAX_USERS];
    int userCount = 0;

    int choice;
    int loggedIn = 0;

    while (1) {
        if (!loggedIn) {// kiem tra dung sai xem nguoi dung dang nhap hay chua 
            printf("1. Dang ki tai khoan\n");
            printf("2. Dang nhap \n");
            printf("3. Thoat\n");
            printf("lua chon cua ban: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    registerUser(userList, &userCount);
                    break;
                case 2:
                    loggedIn = loginUser(userList, userCount);
                    break;
                case 3:
                    printf("Ket thuc chuong trinh.\n");
                    return 0;
                default:
                    printf("lua chon ko hop le.\n");
            }
        } else {
            // Th?c hi?n các tác v? sau khi ðãng nh?p thành công
            printf("dang nhap thanh cong, cac tinh nang duoc thuc hien o day.\n");
            printf("nhap 0 dang xuat, 3 de ket thuc: ");
            scanf("%d", &choice);

            if (choice == 0) {
                loggedIn = 0;
            } else if (choice == 3) {
                printf("ket thuc chuong trinh.\n");
                return 0;
            } else {
                printf("khong hop le.\n");
            }
        }
    }
}
