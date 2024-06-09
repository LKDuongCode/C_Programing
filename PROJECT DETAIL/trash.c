#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    char pass[20];
} User;

int main() {
    int index = 2;
    User list[10] = {
        { 1, "goku", "goku" },
        { 2, "gohan", "gohan" }
    };

    FILE *f;
    f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\user.bin", "wb");
    if (f == NULL) {
        printf("\nfailed!");
        return 0;
    }

    for (int i = 0; i < index; i++) {
        fwrite(&list[i], sizeof(Test), 1, f);
    }

    fclose(f);

    int count = 0;

    f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\user.bin", "rb");
    if (f == NULL) {
        printf("Không th? m? t?p tin d? d?c!\n");
        return 0;
    }

    while (fread(&list[count], sizeof(Test), 1, f) == 1) {
        count++;
    }

    fclose(f);

    // In thông tin dã d?c
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", list[i].id);
        printf("Tên: %s\n", list[i].name);
        printf("M?t kh?u: %s\n", list[i].pass);
        printf("----------\n");
    }

    return 0;
}
