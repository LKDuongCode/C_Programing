// nhap vao cac so nguyen , tinh tong cac so le vua nhap, ket thuc khi bang 0
#include<stdio.h>
int main (){
	printf("moi ngai nhap vao cac so nguyen:\n");
	int a=1;
	int sum=0;
	while (a!=0){
		scanf("%d",&a);
		
		if (a%2==0){
			sum=sum+a;
		}
	}
	printf("Tong cac so nguyen la:%d",sum);
}
