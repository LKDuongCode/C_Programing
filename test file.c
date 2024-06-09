#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int id;
	char name[50];
	char pass[50];
}Test;


int main()
{
	Test list[10] = 
	{
		{
			1,
			"goku",
			"goku"
		},
		
		{
			2,
			"gohan",
			"gohan"
		}
	};
	
	FILE *f;
	f = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\PROJECT DETAIL\\user.bin", "wb");
	if(f==NULL){
		printf("\nLoi moi file de ghi!");
		return 0;
	}
	fwrite(list[1], sizeof(Test), 1, f);
	fclose(f);
}
