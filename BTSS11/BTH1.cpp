#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	int numbers[n];
	for (int i=0; i<n; i++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	for (int i=1; i<n; i++){
		int key = numbers[i];
		int j = i-1;
		while (j>=0 && key < numbers[j]){
			numbers[j+1] = numbers[j];
			j = j-1;
		}
		numbers[j+1] = key;
	}
	printf( "sau khi sap xep:");
	for (int i = 0; i<n; i++){
		printf("%d\t",numbers[i]);
	}
	
}
