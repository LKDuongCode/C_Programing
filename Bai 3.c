#include<stdio.h>
int main() {
	int N[499];
	int n;
	printf("Nhap so chu so can nhap");
	scanf("%d",n);
	int arr[n];
	if(n>500) {
		printf("Vuot qua gioi han chu so.");
	}
	else if(n<=500){
		for (int i=0; i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for (int i=0; i<n;i++){
			printf("%d",arr[i]);
		}
	}
}
