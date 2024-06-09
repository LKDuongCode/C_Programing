#include<stdio.h>
#include<stdlib.h>
typedef struct //struct book
{
	int  bookId;
	char bookName[100];
	char bookAuthor[50];
	char bookType[50];
	char bookStatus[20]; // mo - dong.(bao tri)
}BookInfo;

void printBook(BookInfo bookList[], int bookIndex) 
{
   
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("| %-6s | %-30s | %-15s | %-15s | %-15s |\n", "ID", "Ten sach", "Tac gia", "The loai", "Trang thai");
    printf("------------------------------------------------------------------------------------------------------------\n");

    
    for (int i = 0; i < bookIndex; i++) 
	{
        printf("| %-6d | %-30s | %-15s | %-15s | %-15s |\n", bookList[i].bookId, bookList[i].bookName, bookList[i].bookAuthor, bookList[i].bookType, bookList[i].bookStatus);
        printf("------------------------------------------------------------------------------------------------------------\n");
    }
}
int main()
{
	int bookIndex = 0;
	BookInfo bookList [500];
	
	FILE *bookFile = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\BookInfo.bin", "rb");
	if (bookFile == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    while (fread(&bookList [bookIndex], sizeof(BookInfo), 1, bookFile) == 1) {
        bookIndex++;
    }
    fclose(bookFile);	
	printBook(bookList,bookIndex);
	
	
}
