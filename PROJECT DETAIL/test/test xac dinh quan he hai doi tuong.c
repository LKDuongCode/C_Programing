#include <stdio.h>
#include <string.h>

const int MAX_STUDENTS  = 20;
const int MAX_CLASSES = 5;
const int MAX_CLASSES_PER_STUDENT = 10;
const int MAX_STUDENTS_PER_CLASS = 20;

// Struct Sinh viên
struct Student {
    int id;
    char name[50];
    char gender[10];
    int class_count; // S? l?p h?c sinh viên dang tham gia
    int class_ids[MAX_CLASSES_PER_STUDENT]; // M?ng ch?a id c?a các l?p mà sinh viên dang tham gia
};

// Struct L?p h?c
struct Class {
    int id;
    char name[50];
    char time[20];
    int student_count; // S? sinh viên dang tham gia l?p
    int student_ids[MAX_STUDENTS_PER_CLASS]; // M?ng ch?a id c?a các sinh viên trong l?p
};

// Hàm in ra danh sách sinh viên
void printStudents(struct Student students[], int student_count, struct Class classes[], int class_count) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < student_count; i++) {
        if (students[i].id != 0) {
            printf("ID: %d, Ten: %s, Gioi tinh: %s\n", students[i].id, students[i].name, students[i].gender);
            printf("Dang hoc cac lop: ");
            for (int j = 0; j < students[i].class_count; j++) {
                int class_id = students[i].class_ids[j];
                printf("%s ", classes[class_id - 1].name);
            }
            printf("\n");
        }
    }
}

// Hàm in ra danh sách l?p h?c
void printClasses(struct Class classes[], int class_count, struct Student students[], int student_count) {
    printf("Danh sach lop hoc:\n");
    for (int i = 0; i < class_count; i++) {
        if (classes[i].id != 0) {
            printf("ID: %d, Ten: %s, Thoi gian: %s\n", classes[i].id, classes[i].name, classes[i].time);
            printf("Co %d sinh vien:\n", classes[i].student_count);
            for (int j = 0; j < classes[i].student_count; j++) {
                int student_id = classes[i].student_ids[j];
                if (students[student_id - 1].id != 0) {
                    printf("- %s\n", students[student_id - 1].name);
                }
            }
        }
    }
}

// Hàm tìm ki?m sinh viên theo ID
void searchStudentById(struct Student students[], int student_count, int id, struct Class classes[], int class_count) {
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("Thong tin sinh vien:\n");
            printf("ID: %d, Ten: %s, Gioi tinh: %s\n", students[i].id, students[i].name, students[i].gender);
            
            // Hi?n th? thông tin các l?p mà sinh viên dang h?c
            printf("Dang hoc cac lop: ");
            for (int j = 0; j < students[i].class_count; j++) {
                int class_id = students[i].class_ids[j];
                printf("%s ", classes[class_id - 1].name);
            }
            printf("\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien voi ID: %d\n", id);
}

// Hàm tìm ki?m l?p h?c theo ID
void searchClassById(struct Class classes[], int class_count, int id, struct Student students[], int student_count) {
    for (int i = 0; i < class_count; i++) {
        if (classes[i].id == id) {
            printf("Thong tin lop hoc:\n");
            printf("ID: %d, Ten: %s, Thoi gian: %s\n", classes[i].id, classes[i].name, classes[i].time);
            
            // Hi?n th? thông tin sinh viên trong l?p
            printf("Co %d sinh vien:\n", classes[i].student_count);
            for (int j = 0; j < classes[i].student_count; j++) {
                int student_id = classes[i].student_ids[j];
                if (students[student_id - 1].id != 0) {
                    printf("- %s\n", students[student_id - 1].name);
                }
            }
            return;
        }
    }
    printf("Khong tim thay lop hoc voi ID: %d\n", id);
}

// Hàm thêm sinh viên vào l?p
void addStudentToClass(struct Student students[], int student_count, int student_id, struct Class classes[], int class_count, int class_id) {
    if (student_id >= 1 && student_id <= student_count && class_id >= 1 && class_id <= class_count) {
        int index = students[student_id - 1].class_count;
        if (index < MAX_CLASSES_PER_STUDENT) {
            students[student_id - 1].class_ids[index] = class_id;
            students[student_id - 1].class_count++;

            int classIndex = classes[class_id - 1].student_count;
            if (classIndex < MAX_STUDENTS_PER_CLASS) {
                classes[class_id - 1].student_ids[classIndex] = student_id;
                classes[class_id - 1].student_count++;
            } else {
                printf("Khong the them sinh vien vao lop. Lop da day.\n");
            }
        } else {
            printf("Khong the them sinh vien vao lop. Sinh vien tham gia qua nhieu lop.\n");
        }
    } else {
        printf("Khong the them sinh vien vao lop. ID sinh vien hoac ID lop khong hop le.\n");
    }
}

int main() {
    struct Student students[MAX_STUDENTS] = {{0}};
    struct Class classes[MAX_CLASSES] = {{0}};

    // Kh?i t?o sinh viên
    students[0] = (struct Student){1, "Sinh Vien A", "Nam", 0, {0}};
    students[1] = (struct Student){2, "Sinh Vien B", "Nu", 0, {0}};
    students[2] = (struct Student){3, "Sinh Vien C", "Nam", 0, {0}};
    students[3] = (struct Student){4, "Sinh Vien D", "Nu", 0, {0}};

    // Kh?i t?o l?p h?c
    classes[0] = (struct Class){1, "Lop A", "8:00-10:00", 0, {0}};
    classes[1] = (struct Class){2, "Lop B", "10:00-12:00", 0, {0}};
    classes[2] = (struct Class){3, "Lop C", "13:30-15:30", 0, {0}};

    // Thêm sinh viên vào l?p h?c
    addStudentToClass(students, MAX_STUDENTS, 1, classes, MAX_CLASSES, 1);
    addStudentToClass(students, MAX_STUDENTS, 2, classes, MAX_CLASSES, 1);
    addStudentToClass(students, MAX_STUDENTS, 3, classes, MAX_CLASSES, 2);

    int choice;
    int id;

    do {
        // In ra menu
        printf("\nMenu:\n");
        printf("1. In ra danh sach sinh vien\n");
        printf("2. In ra danh sach lop hoc\n");
        printf("3. Tim kiem sinh vien theo ID\n");
        printf("4. Tim kiem lop hoc theo ID\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printStudents(students, MAX_STUDENTS, classes, MAX_CLASSES);
                break;
            case 2:
                printClasses(classes, MAX_CLASSES, students, MAX_STUDENTS);
                break;
            case 3:
                printf("Nhap ID sinh vien: ");
                scanf("%d", &id);
                searchStudentById(students, MAX_STUDENTS, id, classes, MAX_CLASSES);
                break;
            case 4:
                printf("Nhap ID lop hoc: ");
                scanf("%d", &id);
                searchClassById(classes, MAX_CLASSES, id, students, MAX_STUDENTS);
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 0);

    return 0;
}

