#include <stdio.h>
#include <string.h>


typedef struct {
    int id;
    char name[50];
    int age;
} Person;

int main() {
    Person people[100];  

    // Nhap so nguoi muon them
    int numPeopleToAdd;
    printf("Nhap so luong nguoi muon them: ");
    scanf("%d", &numPeopleToAdd);

    // Them tung nguoi vao mang struct
    for (int i = 0; i < numPeopleToAdd; i++) {
        Person newPerson;

        // Nhap thong tin nguoi moi
        printf("Nguoi them %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &newPerson.id);
        printf("name: ");
        scanf("%s", newPerson.name);
        printf("age: ");
        scanf("%d", &newPerson.age);

        // them nguoi moi vao mang struc
        people[i] = newPerson;
    }


    printf("Thanh vien trong danh sach:\n");
    for (int i = 0; i < numPeopleToAdd; i++) {
        printf("ID: %d, name: %s, age: %d\n", people[i].id, people[i].name, people[i].age);
    }

    return 0;
}
