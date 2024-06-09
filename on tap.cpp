#include<stdio.h>
int main(){
	int size;
	printf("nhap so phan tu:");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	// sap xep noi bot
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("mang sau khi xep:");
	for (int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}
