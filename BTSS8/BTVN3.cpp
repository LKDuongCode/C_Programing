#include<stdio.h>
int main (){
	int n,sumFind;
	printf("moi nhap vao so phan tu trong mang:");
	scanf("%d",&n);
	int arr[n];
	for (int a=0;a<sizeof(arr)/sizeof(int);a++){
		printf("arr[%d]=",a);
		scanf("%d",&arr[a]);
	}
	int findNumber;
	printf("moi nhap vao gia tri can tim:");
	scanf("%d",&findNumber);
	printf("chi so cac phan tu bang findNumber la:");
	for ( int a=0;a<sizeof(arr)/sizeof(int);a++){
		if (findNumber==arr[a]){
			printf("[%d]\t",a);
			sumFind=sumFind+arr[a];
		}
	} 
	printf("\n tong cua cac phan tu co gia tri bang findNumber la: %d",sumFind);
	
} 
