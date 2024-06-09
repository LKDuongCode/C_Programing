#include <stdio.h>

// dinh nghia struct
typedef struct {
    char ten[50];
    int tuoi;
    float diem;
} SinhVien;

int main() {
    // khoi tao mot mang sinh vien
    SinhVien sinhVien[3] = {
        {"Nguyen Van A", 20, 7.5},
        {"Le Thi B", 21, 8.0},
        {"Tran Van C", 22, 8.5}
    };

    // in tieu de
    printf("-----------------------------------------\n");
    printf("| %-15s | %-5s | %-5s |\n", "Ten", "Tuoi", "Diem");
    printf("-----------------------------------------\n");

    // duyet qua mang va in thong tin
    for(int i = 0; i < 3; i++) {
        printf("| %-15s | %-5d | %-5.2f |\n", sinhVien[i].ten, sinhVien[i].tuoi, sinhVien[i].diem);
        printf("-----------------------------------------\n");
    }

    return 0;
}

