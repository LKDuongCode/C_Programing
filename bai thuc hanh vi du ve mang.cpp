/* 
1. nhap so phan tu cua mang (n) va khai bao mang 1 chieu so nguyen gom n phan tu
2. nhap gia tri cac phan tu cua mang 
3. in ra cac phan tu trong mang
4. in cac phan tu co gia tri chan trong mang
5. tinh tong cac phan tu co chi so le trong mang 
*/
#include<stdio.h>
int main (){
	printf (" moi ngai nhap vao so phan tu cua mang");
	int n,i ;
	int numbers[n];
	scanf("%d",&n);
	for ( i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
		}
	printf("gia tri phan tu trong mang"); 
	for (i=0;i<n;i++){
		printf("%d\t",numbers[i]); 
	}
	printf("\n cac phan tu co chi so chan la:"); 
	for (i=0;i<n;i++){
		if (numbers[i]%2==0){
			printf("\n so chan:%d",numbers[i]);
		} 
	}
	printf(" \n");
	int sum=0;
	for (i=0;i<n;i++){
		if (i%2!=0){
			sum=sum+numbers[i];
			printf("%d",sum); 
		} 
	} 
} 
