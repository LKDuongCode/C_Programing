#include <stdio.h>

typedef struct {
    int tchrCode;
    char tchrName[50];
    // C�c tru?ng th�ng tin kh�c c?a struct
} TeacherInfo;

int main() {
    int deleteCode; // M� s? ph?n t? c?n x�a
    
    // M? file d? d?c d? li?u
    FILE *oldFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\teachers.txt", "r");
    if (oldFile == NULL) {
        printf("Khong the mo file goc.\n");
        return 1;
    }
    
    // M? file t?m d? ghi d? li?u m?i
    FILE *tempFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\temp.txt", "w");
    if (tempFile == NULL) {
        printf("Khong the mo file tam.\n");
        fclose(oldFile);
        return 1;
    }
    
    // Nh?p m� s? ph?n t? c?n x�a
    printf("Nhap ma so phan tu can xoa: ");
    scanf("%d", &deleteCode);
    
    // �?c t?ng d�ng d? li?u t? file g?c v� ki?m tra d? x�a ph?n t? tuong ?ng
    TeacherInfo teacher;
    while (fscanf(oldFile, "%d %s", &teacher.tchrCode, teacher.tchrName) != EOF) {
        // Ki?m tra n?u m� s? ph?n t? hi?n t?i kh�c v?i m� s? c?n x�a
        if (teacher.tchrCode != deleteCode) {
            // Ghi l?i d�ng d? li?u v�o file t?m
            fprintf(tempFile, "%d %s\n", teacher.tchrCode, teacher.tchrName);
            // Ghi c�c tru?ng th�ng tin kh�c c?a struct tuong ?ng
        }
    }
    
    // ��ng c? hai file
    fclose(oldFile);
    fclose(tempFile);
    
    // X�a file g?c
    remove("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\teachers.txt");
    
    // �?i t�n file t?m th�nh t�n file g?c
    rename("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\temp.txt", "C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\teachers.txt");
    
    printf("Da xoa phan tu va cap nhat du lieu trong file.\n");
    
    return 0;
}
