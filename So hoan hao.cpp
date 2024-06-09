#include<stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n==sum){
		printf("Day la so hoan hao");
	}else{
		printf("Day khong phai so hoan hao");
	}
}
