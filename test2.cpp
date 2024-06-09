#include <stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
    char name[20];
    char pass[20];
} Test;

int main() {
    Test list[10] = {
        { 1, "goku", "goku" },
        { 2, "gohan", "gohan" }
    };

    FILE *f;
    f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\user.bin", "wb");
    if (f == NULL) {
        printf("\nFailed to open the file for writing!");
        return 0;
    }

    fwrite(&list[1], sizeof(Test), 1, f);
    fclose(f);

    return 0;
}
