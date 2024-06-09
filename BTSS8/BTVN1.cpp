#include<stdio.h>
int main (){
	int n;
	printf("nhap vao so phan tu:");
	scanf("%d",&n);
	int numbers[n];
	for (int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	int max=numbers[0], min=numbers[0];
	for (int i=0;i<n;i++){
		max=(max<numbers[i])?numbers[i]:max;
		min=(min>numbers[i])?numbers[i]:min;
	}printf("%d\n",max);
	printf("%d",min);
}
