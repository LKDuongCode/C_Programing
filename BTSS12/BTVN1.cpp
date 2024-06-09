#include <stdio.h>

int calculateDifference(int x, int y)//x va y dai dien cho hai so 
{
    if (x > y) 
	{
        return x - y;
    } 
	else 
	{
        return y - x;// gia tri tra ve la mot bieu thuc
    }
}

int main() {
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Tinh va in ra ket qua cho moi cap so
    printf("Cap so thu 1:\n");
    printf("%d + %d = %d\n", a, b, (a + b));
    printf("%d - %d = %d\n", b, a, calculateDifference(a, b));// truyen gia tri cua a, b vao x,y de tinh toan.

    printf("Cap so thu 2:\n");
    printf("%d + %d = %d\n", b, c, (b + c));
    printf("%d - %d = %d\n", c, b, calculateDifference(b, c));// tuong tu

    printf("Cap so thu 3:\n");
    printf("%d + %d = %d\n", a, c, (a + c));
    printf("%d - %d = %d\n", c, a, calculateDifference(a, c));

    return 0;
}
