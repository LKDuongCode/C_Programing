#include <stdio.h>

struct Student
{
    char name[20];
    int old;
    int phoneNumber;
    char email[50];
};
typedef struct Student s;
void inputStruct(s *a, int i)
{
    printf("nhap ten ");
    getchar();
    gets((a + i)->name);
    printf("nhap tuoi ");
    scanf("%d", &((a + i)->old));
    printf("nhap sdt ");
    scanf("%d", &((a + i)->phoneNumber));
    printf("nhap email ");
    getchar();
    gets((a + i)->email);
}
void outputStruct(s *a, int i)
{
    printf("Cac thong tin ve hoc sinh thu %i la\n", i);
    printf("Name");
    puts((a + i)->name);
    printf("OLD:");
    printf("%d", ((a + i)->old));
    printf("PhoneNumber=");
    printf("\n%d\n", ((a + i)->phoneNumber));
    printf("Email");
    puts((a + i)->email);
}
void deleteStudent(s *a, int j, int count)
{
    for (int i = j; i < count; i++)
    {
        *(a + i) = *(a + i + 1);
    }
}
struct Student student [50];

int main()
{
    int n;
	int currentIndex = 0;
	int index = 0;
	int updateIndex=0;
    do
    {
        printf("1.Nhap them sinh vien\n");
        printf("2.Sua\n");
        printf("3.Xoa\n");
        printf("4.In ra danh sach hoc sinh");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so sinh vien muon them \n");
            getchar();
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                inputStruct(student, currentIndex);
                currentIndex++;
            }
            for (int i = 0; i < currentIndex; i++)
            {
                outputStruct(student, i);
            }
            break;
        case 2:
            printf("Nhap vi tri phan tu ban muon cap nhap");
            scanf("%d",&updateIndex);
            if (updateIndex>=0&&updateIndex<currentIndex)
            {
                inputStruct(student,updateIndex);
            }
            else{
                printf("Vi tri ko hop le");
            }
            break;
        case 3:
            printf("Nhap vi tri phan tu muon xoa trong mang\n");
            scanf("%d", &index);
            if (index < currentIndex)
            {
                deleteStudent (student, index, currentIndex);
                currentIndex--;
                for (int i = 0; i < currentIndex; i++)
                {
                    outputStruct(student, i);
                }
            }
            else{
                printf("phan tu do ko ton tai");
            }
            break;
        case 4:
        for (int i = 0; i < currentIndex; i++)
        {
            outputStruct(student,i);
        }
            break;
        default:
            break;
        }
    } while (1);
}
