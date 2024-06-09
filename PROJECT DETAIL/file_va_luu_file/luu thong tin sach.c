#include<stdio.h>
#include<stdlib.h>
typedef struct //struct book
{
	int id;
	char bookName[100];
	char bookAuthor[50];
	char bookType[50];
	char bookStatus[20]; // mo - dong.(bao tri)
}BookInfo;

int main()
{
	int curIndex = 2;
	BookInfo bookList [500] =
			{
				{
					888,
					"God of war",
					"Unknow",
					"Than Thoai",
					"Mo"
				},
				
				{
					994,
					"Mat Biec",
					"Nguyen Nhat Anh",
					"Tieu Thuyet",
					"Dong"
				}
			};
	
	FILE *f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\file va luu file\\BookInfo.bin", "wb");
	if (f == NULL) 
	{
        printf("\nfailed!");
        return 0;
    }
    
    for (int i = 0; i < curIndex; i++) 
	{
        fwrite(&bookList[i], sizeof(BookInfo), 1, f);
    }

    fclose(f);	
}
