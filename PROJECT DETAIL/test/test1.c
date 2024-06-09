#include <stdio.h>

typedef struct {
    int tchrCode;
    char tchrName[50];
    // Các tru?ng thông tin khác c?a struct
} TeacherInfo;

int main() {
    int deleteCode; // Mã s? ph?n t? c?n xóa
    
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
    
    // Nh?p mã s? ph?n t? c?n xóa
    printf("Nhap ma so phan tu can xoa: ");
    scanf("%d", &deleteCode);
    
    // Ð?c t?ng dòng d? li?u t? file g?c và ki?m tra d? xóa ph?n t? tuong ?ng
    TeacherInfo teacher;
    while (fscanf(oldFile, "%d %s", &teacher.tchrCode, teacher.tchrName) != EOF) {
        // Ki?m tra n?u mã s? ph?n t? hi?n t?i khác v?i mã s? c?n xóa
        if (teacher.tchrCode != deleteCode) {
            // Ghi l?i dòng d? li?u vào file t?m
            fprintf(tempFile, "%d %s\n", teacher.tchrCode, teacher.tchrName);
            // Ghi các tru?ng thông tin khác c?a struct tuong ?ng
        }
    }
    
    // Ðóng c? hai file
    fclose(oldFile);
    fclose(tempFile);
    
    // Xóa file g?c
    remove("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\teachers.txt");
    
    // Ð?i tên file t?m thành tên file g?c
    rename("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\temp.txt", "C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\teachers.txt");
    
    printf("Da xoa phan tu va cap nhat du lieu trong file.\n");
    
    return 0;
}
