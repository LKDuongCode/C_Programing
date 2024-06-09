#include <stdio.h>

int main() 
{
    FILE *filePointer;
    int lineCount = 0;
    char x;

    filePointer = fopen("C:\\Users\\Admin\\Desktop\\BTVN3.txt", "r");
    if (filePointer == NULL) 
	{
        printf("Khong the mo file de doc.\n");
        return 1;
    }

    while ((x = fgetc(filePointer)) != EOF) 
	{
        if (x == '\n') 
		{
            lineCount++;
        }
    }

    fclose(filePointer);

    printf("So dong trong file: %d\n", lineCount + 1);

    return 0;
}
