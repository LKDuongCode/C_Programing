#include<stdio.h>
int main (){
	printf("nhap:");
	int n;
	int arr[n];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	} 
	// sap xep chon
	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n;j++){
			if (arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
} 
