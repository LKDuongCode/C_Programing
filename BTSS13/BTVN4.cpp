#include<stdio.h>
#include<string.h>

void strMax(char* str) {
    int lengthMax = 0;
    int currentLength;
    int start = 0;
    for (int i = 0; i < strlen(str); i++) {
        int appeared[256] = { 0 };
        currentLength = 0;
        for (int j = i; j < strlen(str); j++) {
            if (appeared[str[j]] == 0) {
                appeared[str[j]] = 1;
                currentLength++;
            }
            else {
                break;
            }
        }
        if (currentLength > lengthMax) {
            lengthMax = currentLength;
            start = i;
        }
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ", lengthMax);
    for (int k = start; k < start + lengthMax; k++) {
        printf("%c", str[k]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    return 0;
}
