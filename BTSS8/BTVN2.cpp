#include<stdio.h>
int main (){
	int sumNumber=0, row, col;
	printf("nhap vao so hang va so cot:");
	int arr[row][col];
	scanf("%d %d",&row,&col);
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("cac so chan trong mang la:\t");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			if (arr[i][j]%2==0)
            {
                sumNumber+=arr[i][j];
                printf("numbers[%d][%d]=%d",i,j,arr[i][j]);
            }
		}
	}
	printf("\n tong cac so chan la: %d",sumNumber);
	
}
